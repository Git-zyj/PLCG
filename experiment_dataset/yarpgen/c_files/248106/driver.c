#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)125;
unsigned long long int var_4 = 1220442225648295089ULL;
long long int var_5 = -2788277989837738053LL;
short var_7 = (short)-14664;
unsigned short var_8 = (unsigned short)8784;
unsigned long long int var_9 = 17485908698715883992ULL;
unsigned int var_10 = 1002742875U;
int var_14 = -71783798;
int zero = 0;
unsigned char var_15 = (unsigned char)33;
unsigned short var_16 = (unsigned short)45612;
int var_17 = -1667410300;
unsigned long long int var_18 = 16258190702686485817ULL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)113;
unsigned char var_21 = (unsigned char)59;
unsigned int var_22 = 1917726797U;
unsigned short var_23 = (unsigned short)3894;
unsigned short var_24 = (unsigned short)61249;
unsigned int arr_0 [22] [22] ;
_Bool arr_1 [22] ;
short arr_2 [22] [22] ;
unsigned long long int arr_4 [10] [10] ;
unsigned int arr_5 [10] ;
unsigned long long int arr_7 [23] ;
long long int arr_8 [23] ;
unsigned long long int arr_3 [22] ;
long long int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 3507741335U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (short)25826;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 6543796412876212972ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3174377939U : 3820608834U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 4066112530689069843ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = -5974197204327914297LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 61334668238264172ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -550811920786233488LL : 2169037472680921015LL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
