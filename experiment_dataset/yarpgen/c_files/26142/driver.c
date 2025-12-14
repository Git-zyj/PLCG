#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)152;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)47;
signed char var_9 = (signed char)123;
short var_10 = (short)-25295;
unsigned long long int var_11 = 13463379501464818136ULL;
int var_12 = -656269069;
unsigned char var_13 = (unsigned char)153;
unsigned long long int var_15 = 15588501589269978146ULL;
unsigned int var_16 = 3511087244U;
int zero = 0;
unsigned char var_18 = (unsigned char)185;
unsigned short var_19 = (unsigned short)18122;
unsigned char var_20 = (unsigned char)111;
unsigned short var_21 = (unsigned short)2981;
unsigned long long int var_22 = 769209076619019655ULL;
signed char var_23 = (signed char)72;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 639202575U;
signed char arr_0 [16] [16] ;
short arr_5 [16] ;
signed char arr_6 [16] ;
long long int arr_7 [16] ;
long long int arr_8 [16] ;
short arr_18 [20] ;
short arr_9 [16] ;
long long int arr_10 [16] ;
long long int arr_15 [14] ;
_Bool arr_16 [14] [14] ;
unsigned short arr_17 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)-25132;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 4032470531957095784LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 2054124164938783633LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (short)23119;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)16572 : (short)24946;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 5943558653486001476LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 3880445465302800440LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (unsigned short)19846;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
