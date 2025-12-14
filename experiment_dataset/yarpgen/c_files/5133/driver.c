#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)4;
long long int var_4 = -1731646015748859448LL;
unsigned short var_6 = (unsigned short)8252;
unsigned char var_7 = (unsigned char)15;
unsigned long long int var_8 = 4557368859412119601ULL;
int zero = 0;
unsigned int var_12 = 4240413341U;
unsigned short var_13 = (unsigned short)21812;
unsigned char var_14 = (unsigned char)36;
short arr_1 [23] ;
short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-11659;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)16317;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
