#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
long long int var_7 = -41378014349207187LL;
unsigned char var_11 = (unsigned char)107;
unsigned long long int var_12 = 16848943525247685276ULL;
int var_16 = 448123408;
unsigned short var_17 = (unsigned short)45165;
int zero = 0;
unsigned short var_19 = (unsigned short)33198;
unsigned char var_20 = (unsigned char)200;
unsigned long long int var_21 = 16769391417420764533ULL;
unsigned char var_22 = (unsigned char)186;
signed char var_23 = (signed char)-65;
unsigned short var_24 = (unsigned short)10446;
int arr_1 [24] [24] ;
unsigned short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1111988915;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)45951;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
