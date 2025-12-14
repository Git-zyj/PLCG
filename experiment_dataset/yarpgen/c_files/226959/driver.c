#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
unsigned int var_2 = 3558804842U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 7828286940906330161ULL;
unsigned long long int var_7 = 6894992240838628672ULL;
unsigned int var_9 = 401535065U;
int zero = 0;
unsigned long long int var_10 = 21363574006519813ULL;
unsigned long long int var_11 = 15933895150851051120ULL;
unsigned char var_12 = (unsigned char)156;
unsigned long long int var_13 = 936715688493611974ULL;
unsigned long long int arr_2 [11] ;
long long int arr_3 [11] ;
int arr_4 [11] ;
unsigned long long int arr_5 [11] ;
_Bool arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 11753642503830249138ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -2451353755066488629LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -810699704;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 11452297334198618829ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
