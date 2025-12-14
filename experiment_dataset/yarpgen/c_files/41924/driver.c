#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7350747083474669094ULL;
long long int var_2 = 3133902355122953826LL;
long long int var_4 = 1068849035757300055LL;
unsigned short var_6 = (unsigned short)41464;
short var_7 = (short)-2924;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 18154402290431778423ULL;
unsigned long long int var_11 = 427187510936738923ULL;
int zero = 0;
short var_12 = (short)-4137;
short var_13 = (short)6431;
unsigned char var_14 = (unsigned char)53;
short var_15 = (short)-249;
unsigned char var_16 = (unsigned char)63;
int arr_0 [23] ;
short arr_1 [23] ;
signed char arr_5 [16] [16] ;
signed char arr_6 [16] [16] ;
unsigned char arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 140498924;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)4161;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)90;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
