/***************************
 *FUNCTION: vertebra.c
 *DESCRIPTION: CONVERT NOVEL TO SPECTIAL PICTURE
 *NAME:WENZONG
 *DATE:2018/08/20
 * ***************************/
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
#define MAX_LINE 1024  
  
int main()  
{  
 	 char buf[MAX_LINE];  /*缓冲区*/  
	 FILE *fp;            /*文件指针*/  
	 int len;             /*行字符个数*/  
  
	 if((fp = fopen("novel.txt","r")) == NULL)  
	 {  
		 perror("fail to read");  
		 exit (1) ;  
	 }  
  
	 while(fgets(buf,MAX_LINE,fp) != NULL)  
	 {  
		 len = strlen(buf);  
		 buf[len-1] = '\0';  /*去掉换行符*/  
	//	 printf("%s %d \n",buf,len - 1);  
		 printf("%s \n", buf);
	 }  
  	return 0;  
}  
