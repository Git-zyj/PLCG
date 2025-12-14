#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20625;
unsigned long long int var_6 = 1007409020503921229ULL;
unsigned int var_10 = 1781717305U;
int zero = 0;
int var_19 = -65513131;
short var_20 = (short)-23292;
unsigned int var_21 = 2350989334U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
