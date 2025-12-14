#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6709771739058931622LL;
unsigned long long int var_2 = 2399694145176218650ULL;
short var_4 = (short)-21957;
unsigned short var_11 = (unsigned short)13607;
int zero = 0;
unsigned int var_12 = 2960475515U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 3226973189435439438ULL;
unsigned int var_15 = 2523481630U;
unsigned long long int arr_0 [19] [19] ;
unsigned int arr_4 [19] ;
signed char arr_5 [19] [19] [19] ;
unsigned int arr_6 [19] ;
signed char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 10531589845476870188ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 2473255919U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 2881858273U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (signed char)79;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
