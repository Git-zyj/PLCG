#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58385;
unsigned short var_1 = (unsigned short)16997;
unsigned long long int var_2 = 797843057279530746ULL;
unsigned long long int var_3 = 18063622529656309925ULL;
unsigned long long int var_4 = 201075277700095471ULL;
unsigned int var_6 = 3603886294U;
unsigned char var_7 = (unsigned char)244;
short var_8 = (short)-5347;
long long int var_9 = -1790984284718374244LL;
unsigned short var_12 = (unsigned short)27286;
int zero = 0;
unsigned short var_13 = (unsigned short)50231;
short var_14 = (short)-28678;
long long int var_15 = -396117142121874813LL;
unsigned long long int var_16 = 5646574761353826571ULL;
short arr_1 [14] ;
unsigned short arr_4 [14] [14] [14] ;
long long int arr_5 [14] [14] [14] ;
unsigned long long int arr_8 [23] ;
unsigned long long int arr_9 [23] ;
unsigned int arr_3 [14] ;
unsigned int arr_7 [14] ;
unsigned long long int arr_10 [23] [23] ;
unsigned int arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)4024;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)45485;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -2542247903284364351LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 4893077372718704734ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 6294534081218339832ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3969052042U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 2258910277U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = 18040532274865118182ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 3392134525U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
