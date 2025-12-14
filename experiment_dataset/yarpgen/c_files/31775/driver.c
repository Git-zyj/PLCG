#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2752;
long long int var_2 = -426512776548999911LL;
short var_8 = (short)25604;
signed char var_9 = (signed char)7;
int zero = 0;
unsigned char var_14 = (unsigned char)118;
unsigned int var_15 = 2152123041U;
long long int var_16 = -2984211459442045778LL;
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
