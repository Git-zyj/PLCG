#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)227;
unsigned int var_5 = 1304850265U;
unsigned char var_6 = (unsigned char)175;
unsigned char var_7 = (unsigned char)191;
int var_8 = 491098436;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int arr_0 [20] ;
unsigned int arr_1 [20] ;
unsigned char arr_5 [17] ;
signed char arr_6 [17] [17] ;
unsigned short arr_7 [17] ;
int arr_13 [15] ;
int arr_14 [15] ;
long long int arr_2 [20] ;
long long int arr_3 [20] ;
_Bool arr_4 [20] ;
unsigned short arr_8 [17] ;
int arr_9 [17] ;
signed char arr_10 [17] ;
int arr_11 [17] ;
unsigned long long int arr_15 [15] ;
long long int arr_16 [15] ;
int arr_17 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1904939992388305021LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2484492052U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned short)36191;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 1859943335;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = -486965006;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3612755255660896780LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -6553560618422338673LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned short)64156;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 1177689649;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = -1461080979;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = 5316751872221021890ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = -7940115134136469695LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = 119301405;
}

void checksum() {
    hash(&seed, var_10);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
