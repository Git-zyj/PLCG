#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)115;
unsigned int var_6 = 3055215406U;
unsigned int var_10 = 2830105302U;
unsigned int var_11 = 2864212437U;
int zero = 0;
int var_13 = 977814750;
signed char var_14 = (signed char)112;
unsigned char var_15 = (unsigned char)1;
unsigned char var_16 = (unsigned char)8;
unsigned char var_17 = (unsigned char)39;
unsigned long long int arr_0 [14] ;
int arr_1 [14] ;
unsigned char arr_3 [12] ;
signed char arr_4 [12] ;
short arr_2 [14] ;
short arr_5 [12] [12] ;
short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 5510230305275127377ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -1060954233;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)96 : (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-16604;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-30183 : (short)10691;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)17532 : (short)9075;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
