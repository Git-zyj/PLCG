#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58791;
long long int var_2 = -4705888271402689195LL;
int var_4 = -2050538247;
signed char var_5 = (signed char)15;
unsigned char var_7 = (unsigned char)105;
short var_10 = (short)-23587;
int zero = 0;
unsigned int var_11 = 2629028715U;
unsigned char var_12 = (unsigned char)212;
unsigned int var_13 = 3377353257U;
int var_14 = -1755728884;
unsigned char arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)236;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
