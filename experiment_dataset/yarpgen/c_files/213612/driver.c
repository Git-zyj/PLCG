#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1117756157;
unsigned short var_3 = (unsigned short)59216;
signed char var_11 = (signed char)98;
long long int var_13 = 1937454410546851412LL;
short var_14 = (short)-29752;
int zero = 0;
unsigned long long int var_16 = 15926532451424160455ULL;
short var_17 = (short)32267;
short var_18 = (short)-29562;
void init() {
}

void checksum() {
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
