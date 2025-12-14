#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13502;
unsigned int var_4 = 1710513494U;
unsigned short var_5 = (unsigned short)8993;
unsigned long long int var_7 = 5666210719561354853ULL;
signed char var_9 = (signed char)-69;
unsigned int var_10 = 626052640U;
unsigned char var_11 = (unsigned char)32;
int zero = 0;
short var_12 = (short)3715;
short var_13 = (short)23666;
unsigned long long int var_14 = 7474196790363085738ULL;
unsigned int var_15 = 1898231183U;
long long int var_16 = 7309666790618707363LL;
unsigned char var_17 = (unsigned char)215;
signed char arr_5 [11] ;
unsigned long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 10648883289698994295ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
