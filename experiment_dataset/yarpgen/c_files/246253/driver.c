#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7808;
unsigned short var_1 = (unsigned short)18660;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)16;
unsigned short var_8 = (unsigned short)21622;
unsigned char var_10 = (unsigned char)183;
unsigned short var_11 = (unsigned short)19451;
_Bool var_12 = (_Bool)1;
long long int var_13 = 5958329596765781180LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)92;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)79;
int var_22 = 903177505;
signed char var_23 = (signed char)121;
long long int var_24 = 2569364943753960118LL;
unsigned int var_25 = 2805272132U;
int var_26 = -1136489129;
_Bool var_27 = (_Bool)0;
int arr_0 [10] ;
signed char arr_1 [10] ;
int arr_2 [10] ;
unsigned int arr_3 [10] ;
int arr_5 [10] [10] [10] ;
int arr_6 [10] [10] ;
short arr_7 [10] [10] [10] [10] ;
int arr_11 [10] ;
long long int arr_21 [11] ;
int arr_8 [10] ;
unsigned char arr_12 [10] [10] ;
unsigned char arr_17 [10] [10] ;
unsigned char arr_18 [10] [10] ;
unsigned char arr_19 [10] ;
long long int arr_22 [11] ;
_Bool arr_23 [11] ;
signed char arr_24 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -418215608;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -1139163000;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 293797405U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 964649068;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = -2001244068;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)23252;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 976411197;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = 5890591578369617223LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 832836867;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)250 : (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)1 : (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)228 : (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)240 : (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -2140933555287407839LL : 6622718158042826829LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (signed char)-95 : (signed char)-51;
}

void checksum() {
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
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
