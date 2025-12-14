#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1061560099;
unsigned short var_8 = (unsigned short)37755;
int zero = 0;
unsigned int var_11 = 4049208725U;
unsigned short var_12 = (unsigned short)9669;
long long int var_13 = 2933721937712461665LL;
unsigned char var_14 = (unsigned char)128;
short var_15 = (short)-9075;
unsigned short var_16 = (unsigned short)8215;
unsigned short var_17 = (unsigned short)8418;
unsigned int arr_2 [11] [11] ;
unsigned short arr_3 [20] ;
unsigned short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 2881552150U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)22933;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)13002;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
