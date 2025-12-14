#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1805278895358265427LL;
int var_1 = 600431535;
int var_2 = -1643697760;
unsigned char var_4 = (unsigned char)122;
long long int var_6 = -4338398416656991048LL;
unsigned int var_8 = 3791881568U;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-15;
short var_11 = (short)20858;
unsigned char var_12 = (unsigned char)131;
signed char var_13 = (signed char)-44;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)19332;
short var_16 = (short)-31622;
long long int var_17 = -3948596673715565658LL;
int var_18 = 487633305;
unsigned long long int var_19 = 12882786465796845558ULL;
_Bool var_20 = (_Bool)1;
int var_21 = 281574604;
unsigned long long int var_22 = 4665274708140176130ULL;
signed char var_23 = (signed char)83;
long long int var_24 = 5699369436235717934LL;
unsigned int var_25 = 2758365973U;
_Bool arr_3 [19] [19] [19] ;
unsigned long long int arr_7 [19] [19] ;
int arr_9 [19] [19] [19] ;
long long int arr_12 [19] [19] ;
int arr_14 [19] [19] [19] ;
unsigned long long int arr_18 [19] [19] [19] ;
int arr_13 [19] ;
long long int arr_16 [19] ;
int arr_20 [19] [19] ;
unsigned short arr_25 [19] ;
int arr_29 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 5193831983542383343ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1609739351;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = -1182120010794013209LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -522444094;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 5794608538202011638ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = -1785507452;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = -4734781580371828205LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = 1760477347;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = (unsigned short)16800;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = -840422627;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
