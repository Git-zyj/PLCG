#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1132008862;
unsigned long long int var_3 = 8319948211520994700ULL;
int var_5 = 1927353714;
unsigned long long int var_7 = 11346514995050656921ULL;
unsigned long long int var_8 = 6897372592339415408ULL;
int zero = 0;
unsigned int var_11 = 534300914U;
int var_12 = -1377166679;
short var_13 = (short)-13383;
short arr_0 [16] ;
int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)12774;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 332234902;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
