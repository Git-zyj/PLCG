#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9529272949968121075ULL;
unsigned short var_2 = (unsigned short)55697;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)63005;
_Bool var_8 = (_Bool)0;
unsigned int var_12 = 2278295746U;
unsigned int var_13 = 350025864U;
unsigned int var_15 = 1729249740U;
unsigned int var_16 = 3943487073U;
unsigned long long int var_18 = 10516572804252456856ULL;
int zero = 0;
unsigned int var_19 = 3169420858U;
long long int var_20 = 4558844048972670054LL;
_Bool var_21 = (_Bool)0;
unsigned int arr_0 [16] ;
unsigned int arr_2 [16] ;
_Bool arr_4 [16] [16] [16] ;
unsigned int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3212165439U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 118472182U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 3194746384U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
