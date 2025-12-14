#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_7 = 2619010526U;
unsigned short var_11 = (unsigned short)24870;
unsigned char var_12 = (unsigned char)0;
int var_14 = -790626975;
signed char var_15 = (signed char)-95;
int zero = 0;
short var_20 = (short)-5927;
unsigned short var_21 = (unsigned short)51585;
short var_22 = (short)30361;
int arr_1 [12] ;
unsigned char arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1490948481;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)58;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
