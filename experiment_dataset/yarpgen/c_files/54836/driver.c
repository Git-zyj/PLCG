#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)20468;
unsigned short var_3 = (unsigned short)3715;
unsigned char var_4 = (unsigned char)42;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 153217544U;
unsigned char var_8 = (unsigned char)93;
unsigned int var_9 = 3491292865U;
unsigned long long int var_11 = 14751241216374852874ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1232382027;
unsigned char var_14 = (unsigned char)248;
long long int var_15 = -9106373745809783207LL;
long long int arr_0 [25] ;
_Bool arr_1 [25] ;
_Bool arr_7 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 5382162988309890037LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
