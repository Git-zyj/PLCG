#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24961;
unsigned int var_5 = 2110215886U;
unsigned int var_8 = 1332434342U;
unsigned short var_11 = (unsigned short)33435;
short var_12 = (short)-23327;
int zero = 0;
unsigned int var_15 = 2914324386U;
int var_16 = 521702150;
int var_17 = -337446111;
signed char var_18 = (signed char)-33;
int var_19 = 938809012;
short arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)12648 : (short)21895;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
