#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)63210;
unsigned int var_7 = 3107430413U;
unsigned short var_9 = (unsigned short)1095;
int zero = 0;
signed char var_11 = (signed char)41;
unsigned char var_12 = (unsigned char)155;
unsigned long long int var_13 = 2620743075621377148ULL;
unsigned char var_14 = (unsigned char)214;
unsigned long long int var_15 = 5241034172024132174ULL;
short var_16 = (short)-11243;
unsigned int arr_0 [18] ;
unsigned short arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 14944091U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)62850;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
