#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8690449243280611260ULL;
short var_2 = (short)-15530;
unsigned long long int var_10 = 17655942552712925559ULL;
int var_11 = 1734613255;
long long int var_15 = 2613297799984817134LL;
unsigned int var_16 = 2234738310U;
int var_17 = -1655631709;
int zero = 0;
unsigned int var_20 = 1596008477U;
unsigned long long int var_21 = 17494825845854914003ULL;
unsigned int var_22 = 3378634194U;
short var_23 = (short)29907;
unsigned int var_24 = 1618631790U;
unsigned long long int arr_0 [21] [21] ;
short arr_5 [21] ;
short arr_7 [21] ;
int arr_2 [21] [21] ;
unsigned int arr_3 [21] [21] ;
short arr_4 [21] ;
int arr_8 [21] ;
short arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 4179181677316040116ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-9741;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)13558;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1733405230;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 735012298U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)-11112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 991790438;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (short)-52;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
