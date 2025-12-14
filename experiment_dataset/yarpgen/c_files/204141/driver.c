#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2983614763U;
unsigned short var_3 = (unsigned short)25018;
unsigned int var_4 = 4225091425U;
int var_6 = 2110315137;
_Bool var_7 = (_Bool)1;
long long int var_10 = -755547878821478993LL;
short var_12 = (short)12796;
unsigned int var_13 = 1076679379U;
short var_15 = (short)23754;
unsigned int var_17 = 2151789954U;
unsigned short var_18 = (unsigned short)3265;
short var_19 = (short)30677;
int zero = 0;
long long int var_20 = 5750618638753095400LL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)761;
unsigned int arr_0 [16] [16] ;
long long int arr_1 [16] ;
unsigned char arr_2 [16] ;
unsigned short arr_3 [16] [16] ;
unsigned short arr_4 [16] ;
short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 956751309U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 6857355979363448694LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)11812;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)62144;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)-30885;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
