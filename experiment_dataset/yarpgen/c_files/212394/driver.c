#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)21597;
unsigned char var_6 = (unsigned char)78;
unsigned long long int var_8 = 9099454427932770039ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)6;
unsigned int var_16 = 2267916782U;
unsigned char var_17 = (unsigned char)185;
unsigned int var_18 = 430427250U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
