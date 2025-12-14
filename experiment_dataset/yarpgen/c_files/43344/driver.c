#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 437834655375175158LL;
signed char var_4 = (signed char)-44;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
long long int var_7 = -2786642983531665314LL;
unsigned long long int var_8 = 17927634001778036775ULL;
long long int var_10 = -2712394587692520262LL;
int zero = 0;
int var_11 = 1650110697;
unsigned short var_12 = (unsigned short)33618;
long long int var_13 = 1351647482716565977LL;
long long int var_14 = 4330592188295034579LL;
int var_15 = -1189460485;
unsigned short var_16 = (unsigned short)47894;
unsigned long long int var_17 = 4914333944010144866ULL;
_Bool arr_0 [17] ;
unsigned long long int arr_1 [17] ;
long long int arr_5 [16] [16] ;
unsigned int arr_6 [16] [16] ;
_Bool arr_2 [17] ;
unsigned long long int arr_3 [17] ;
unsigned int arr_8 [16] ;
_Bool arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 3177164297248775568ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 4991772213539163883LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 212081323U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 4314856673454541267ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 1245196162U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
