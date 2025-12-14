#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29260;
signed char var_2 = (signed char)-48;
short var_4 = (short)-21706;
short var_7 = (short)-21817;
int var_8 = 1980431298;
unsigned long long int var_10 = 4650373930245525434ULL;
short var_11 = (short)2305;
int zero = 0;
unsigned int var_13 = 725813451U;
signed char var_14 = (signed char)-23;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
