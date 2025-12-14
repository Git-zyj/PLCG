#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11261;
unsigned short var_4 = (unsigned short)6537;
int var_6 = -52472799;
unsigned char var_7 = (unsigned char)150;
int var_8 = 1465561065;
unsigned long long int var_14 = 15044632143861190238ULL;
unsigned char var_15 = (unsigned char)243;
int var_17 = 970534119;
int zero = 0;
short var_20 = (short)-26570;
unsigned short var_21 = (unsigned short)8996;
int var_22 = 1783873405;
unsigned short var_23 = (unsigned short)21089;
unsigned long long int var_24 = 2185335883138770215ULL;
_Bool var_25 = (_Bool)1;
unsigned int arr_0 [23] ;
short arr_1 [23] ;
int arr_3 [23] [23] [23] ;
unsigned long long int arr_4 [23] [23] ;
unsigned int arr_7 [14] [14] ;
int arr_9 [14] ;
unsigned int arr_10 [14] ;
signed char arr_5 [23] [23] ;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3549681041U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-11858;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1913387333;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 4618344383562540233ULL : 302681512842528419ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 2679203216U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 1969900386;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 1521350418U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)32 : (signed char)10;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)551 : (unsigned short)7720;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
