#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40498;
unsigned int var_3 = 2755656465U;
unsigned short var_4 = (unsigned short)22863;
long long int var_6 = -2300770325358213914LL;
unsigned int var_11 = 134697457U;
unsigned int var_13 = 2024267779U;
int zero = 0;
unsigned int var_14 = 1954382732U;
_Bool var_15 = (_Bool)0;
long long int var_16 = 7353238636584468819LL;
unsigned char arr_1 [10] ;
unsigned int arr_2 [10] [10] [10] ;
long long int arr_3 [10] ;
unsigned int arr_4 [10] ;
unsigned short arr_5 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1970506082U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -2538572624958854164LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 3677884161U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)16191;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
