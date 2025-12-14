#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
unsigned short var_2 = (unsigned short)11516;
signed char var_4 = (signed char)-59;
unsigned char var_5 = (unsigned char)189;
unsigned long long int var_6 = 9196221377537704416ULL;
unsigned char var_8 = (unsigned char)243;
int var_9 = -1390622726;
signed char var_11 = (signed char)121;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)96;
unsigned char var_16 = (unsigned char)187;
int var_17 = 265666360;
signed char var_18 = (signed char)-89;
unsigned short var_19 = (unsigned short)58996;
unsigned short var_20 = (unsigned short)55930;
unsigned short var_21 = (unsigned short)12613;
unsigned char var_22 = (unsigned char)2;
int var_23 = 1207872415;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
short arr_1 [22] [22] ;
unsigned char arr_5 [11] [11] ;
int arr_7 [11] ;
unsigned int arr_10 [11] ;
unsigned int arr_19 [11] ;
long long int arr_2 [22] ;
int arr_3 [22] [22] ;
int arr_4 [22] ;
short arr_16 [11] [11] ;
unsigned long long int arr_17 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)11434;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 192965960;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 4227944063U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = 3893157048U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -5625629080271554463LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -1273755086;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1472174953;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-17685;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 13462719873596563662ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
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
