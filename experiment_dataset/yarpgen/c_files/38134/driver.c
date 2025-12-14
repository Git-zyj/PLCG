#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)25778;
short var_6 = (short)-13740;
long long int var_7 = -7451718940175653319LL;
int zero = 0;
long long int var_16 = 5111505253659585636LL;
int var_17 = 883682190;
int var_18 = -872958635;
unsigned short var_19 = (unsigned short)35514;
void init() {
}

void checksum() {
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
