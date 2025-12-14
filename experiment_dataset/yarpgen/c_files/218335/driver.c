#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)131;
unsigned short var_4 = (unsigned short)21323;
_Bool var_6 = (_Bool)0;
long long int var_7 = 7292362417471071039LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 7705512818915225943ULL;
int zero = 0;
long long int var_15 = -3368182182682117857LL;
short var_16 = (short)379;
void init() {
}

void checksum() {
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
