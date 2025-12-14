#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1426828013U;
long long int var_1 = -1049013966884993192LL;
unsigned short var_2 = (unsigned short)24208;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-26940;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)51654;
unsigned long long int var_12 = 10544075814344636862ULL;
int var_13 = -1398248252;
signed char var_14 = (signed char)60;
long long int var_15 = -8319305671238846922LL;
unsigned int var_16 = 845121637U;
int zero = 0;
long long int var_17 = 4963708291178073427LL;
unsigned char var_18 = (unsigned char)187;
int var_19 = 117458499;
long long int var_20 = -3097084876643238917LL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
int var_23 = -609873002;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 9026048697161557141ULL;
unsigned int var_26 = 1092182788U;
long long int var_27 = -3360514922059309699LL;
unsigned short arr_1 [13] [13] ;
unsigned long long int arr_2 [13] [13] ;
unsigned char arr_3 [13] ;
unsigned char arr_4 [23] ;
unsigned short arr_5 [23] [23] ;
short arr_6 [23] ;
long long int arr_10 [18] [18] ;
short arr_11 [18] [18] ;
short arr_13 [18] ;
short arr_16 [22] [22] ;
unsigned char arr_7 [23] ;
unsigned short arr_8 [23] ;
unsigned char arr_9 [23] ;
_Bool arr_14 [18] [18] ;
signed char arr_17 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)38874 : (unsigned short)17314;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 10725315745947833837ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)22568 : (unsigned short)20925;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)8129 : (short)-25843;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = -1163835937296883743LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-21806;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (short)-17109;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-6158;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)27 : (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49878 : (unsigned short)64131;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)250 : (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (signed char)-108;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
