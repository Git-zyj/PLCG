#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -147793220;
signed char var_10 = (signed char)-91;
short var_16 = (short)-23211;
short var_17 = (short)-2589;
int zero = 0;
short var_20 = (short)26159;
signed char var_21 = (signed char)59;
void init() {
}

void checksum() {
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
