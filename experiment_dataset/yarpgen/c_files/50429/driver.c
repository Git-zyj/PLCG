#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7736645200550063498LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = -8698802563035528475LL;
unsigned short var_9 = (unsigned short)46148;
unsigned char var_10 = (unsigned char)103;
unsigned short var_12 = (unsigned short)22379;
unsigned char var_13 = (unsigned char)248;
unsigned long long int var_16 = 17809348458131694251ULL;
int zero = 0;
int var_17 = 318093998;
int var_18 = -2047393316;
unsigned short var_19 = (unsigned short)53872;
unsigned long long int var_20 = 1633660334786637809ULL;
_Bool var_21 = (_Bool)0;
long long int var_22 = 7387206372538017740LL;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 1280532978U;
short var_25 = (short)11215;
int var_26 = 1807114627;
long long int arr_0 [18] ;
_Bool arr_1 [18] ;
long long int arr_3 [13] ;
unsigned short arr_4 [13] ;
unsigned short arr_5 [13] ;
long long int arr_6 [13] [13] ;
unsigned short arr_2 [18] ;
unsigned short arr_8 [13] [13] ;
unsigned int arr_13 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1732009785560171953LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 6350685807294853340LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)4866;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)36948;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -2691620105951375058LL : -6664221798302506563LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)20358;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)23733 : (unsigned short)37542;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1834738018U : 925515847U;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
