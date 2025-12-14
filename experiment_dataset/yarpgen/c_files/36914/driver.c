#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-45;
short var_2 = (short)6712;
unsigned char var_5 = (unsigned char)77;
unsigned long long int var_6 = 4500888041807201044ULL;
int var_7 = 1405050278;
signed char var_8 = (signed char)123;
long long int var_9 = -74087903797896334LL;
int var_10 = 691986570;
unsigned char var_11 = (unsigned char)229;
unsigned int var_12 = 645257903U;
long long int var_13 = -6641514408932247428LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2656151368U;
unsigned long long int var_16 = 17921362398176004850ULL;
int zero = 0;
signed char var_17 = (signed char)55;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1585402734U;
unsigned char var_20 = (unsigned char)187;
long long int arr_0 [11] ;
long long int arr_1 [11] [11] ;
unsigned int arr_3 [11] ;
unsigned char arr_4 [11] [11] ;
long long int arr_5 [11] ;
short arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3620241133583182915LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 2502634780497286935LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2686534007U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 8774481275986696015LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-29598;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
