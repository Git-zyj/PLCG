#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)13;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)35089;
unsigned int var_4 = 1910486384U;
signed char var_5 = (signed char)-89;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 16041685304187772876ULL;
unsigned int var_8 = 846533683U;
unsigned int var_9 = 972777165U;
unsigned char var_10 = (unsigned char)177;
long long int var_11 = 498590432946221498LL;
unsigned int var_12 = 1918378538U;
int zero = 0;
unsigned int var_13 = 4236863397U;
unsigned long long int var_14 = 17874948400439478331ULL;
unsigned char var_15 = (unsigned char)16;
signed char var_16 = (signed char)9;
int var_17 = -1374200410;
unsigned long long int var_18 = 7631303646810418927ULL;
unsigned short var_19 = (unsigned short)17736;
int var_20 = 719130246;
signed char var_21 = (signed char)65;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)47303;
unsigned char var_25 = (unsigned char)10;
unsigned long long int var_26 = 2980056839253709314ULL;
short var_27 = (short)-10133;
short arr_0 [10] ;
unsigned int arr_1 [10] ;
unsigned char arr_3 [10] [10] ;
_Bool arr_6 [11] ;
unsigned int arr_8 [11] ;
unsigned char arr_10 [11] [11] [11] ;
unsigned short arr_12 [11] [11] [11] ;
int arr_4 [10] [10] [10] ;
signed char arr_13 [11] ;
int arr_17 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)10087;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1739509156U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 1577356991U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)9150;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1782952161 : 563190625;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 1788748419;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
