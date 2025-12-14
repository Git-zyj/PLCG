#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4189680972025771570ULL;
int var_2 = 1605511069;
unsigned char var_3 = (unsigned char)69;
unsigned char var_4 = (unsigned char)87;
unsigned short var_5 = (unsigned short)15088;
unsigned char var_6 = (unsigned char)249;
short var_7 = (short)1532;
short var_9 = (short)-25663;
unsigned long long int var_10 = 17600581416104634500ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)16106;
unsigned char var_12 = (unsigned char)232;
unsigned char var_13 = (unsigned char)97;
unsigned int var_14 = 1221556733U;
int arr_2 [21] [21] ;
signed char arr_5 [21] ;
short arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -60027576;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (short)6889;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
