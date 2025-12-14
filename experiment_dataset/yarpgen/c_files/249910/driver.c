#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11575269038519677910ULL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-7793;
unsigned short var_4 = (unsigned short)3287;
unsigned int var_5 = 4159313406U;
unsigned int var_6 = 2579498408U;
unsigned char var_7 = (unsigned char)47;
int var_8 = 967726667;
long long int var_9 = 5232719731722274636LL;
long long int var_10 = 4182929072781616602LL;
signed char var_11 = (signed char)-126;
int zero = 0;
unsigned int var_12 = 2398228026U;
signed char var_13 = (signed char)103;
unsigned short var_14 = (unsigned short)55662;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 874994880499325251ULL;
unsigned long long int var_17 = 8749951682411153770ULL;
unsigned char var_18 = (unsigned char)147;
unsigned long long int var_19 = 2560954950860332108ULL;
unsigned int var_20 = 1732244394U;
unsigned short var_21 = (unsigned short)10033;
signed char var_22 = (signed char)-27;
_Bool var_23 = (_Bool)0;
unsigned int arr_0 [19] ;
short arr_1 [19] [19] ;
unsigned char arr_2 [19] ;
unsigned short arr_3 [19] [19] ;
short arr_4 [19] ;
long long int arr_5 [19] [19] [19] ;
unsigned char arr_6 [19] [19] ;
int arr_8 [19] ;
signed char arr_9 [19] [19] [19] ;
unsigned long long int arr_10 [19] ;
short arr_11 [19] ;
_Bool arr_14 [10] [10] ;
signed char arr_7 [19] [19] ;
unsigned char arr_12 [19] [19] [19] ;
unsigned char arr_13 [19] ;
short arr_17 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1867992673U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)18623;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)3537 : (unsigned short)49659;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)3595 : (short)-7070;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3100240832957959801LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1319201338 : -319304913;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-52 : (signed char)125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 8511944351149816230ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-8588 : (short)-10308;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-15 : (signed char)-80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)96 : (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)138 : (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (short)24020;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
