#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4383592316346340529ULL;
long long int var_5 = -2275448859793524216LL;
_Bool var_8 = (_Bool)1;
short var_10 = (short)12785;
int zero = 0;
unsigned short var_14 = (unsigned short)54769;
short var_15 = (short)-2485;
unsigned int var_16 = 711871881U;
void init() {
}

void checksum() {
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
