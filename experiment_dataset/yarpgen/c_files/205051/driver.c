#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)19;
unsigned char var_2 = (unsigned char)6;
long long int var_5 = -1335535766288862036LL;
unsigned long long int var_6 = 8082742714501006635ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)33609;
unsigned short var_11 = (unsigned short)36606;
unsigned int var_13 = 3196587942U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5121352121016279028ULL;
unsigned short var_16 = (unsigned short)34079;
unsigned char var_17 = (unsigned char)74;
signed char var_18 = (signed char)122;
_Bool var_19 = (_Bool)1;
long long int var_20 = -555512748756169067LL;
unsigned short var_21 = (unsigned short)53049;
int arr_0 [13] ;
long long int arr_1 [13] [13] ;
int arr_2 [13] ;
long long int arr_10 [15] [15] ;
unsigned short arr_11 [15] ;
short arr_3 [13] ;
unsigned short arr_6 [13] [13] ;
unsigned long long int arr_9 [13] ;
_Bool arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 742863653;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -824252487055265936LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 609143816;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = -5588700020117583197LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (unsigned short)20902;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)-2404;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)23444;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 6993102039521381809ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
