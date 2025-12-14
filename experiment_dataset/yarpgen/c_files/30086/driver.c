#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55975;
unsigned char var_5 = (unsigned char)64;
unsigned int var_8 = 2815330030U;
unsigned char var_9 = (unsigned char)41;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)46451;
signed char var_13 = (signed char)-122;
unsigned char var_14 = (unsigned char)157;
unsigned char var_16 = (unsigned char)53;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)155;
signed char var_19 = (signed char)-72;
signed char var_20 = (signed char)-22;
unsigned char var_21 = (unsigned char)85;
unsigned char var_22 = (unsigned char)160;
signed char arr_1 [20] ;
unsigned int arr_3 [20] [20] [20] ;
_Bool arr_4 [20] [20] [20] ;
unsigned short arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2769431834U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)8096;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
