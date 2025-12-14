#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1020126612;
int var_3 = -460558883;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 1397529077U;
int zero = 0;
unsigned long long int var_13 = 2039456074047612926ULL;
unsigned char var_14 = (unsigned char)70;
int var_15 = 288733657;
unsigned long long int var_16 = 4571059895145219860ULL;
int arr_3 [22] ;
unsigned short arr_4 [22] ;
unsigned long long int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1792321920;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)60313;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 3059838191137599416ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
