#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-9486;
unsigned int var_6 = 99293468U;
long long int var_10 = -7760654644545652105LL;
int zero = 0;
unsigned long long int var_16 = 189773137254617565ULL;
long long int var_17 = -2835173416393859255LL;
short var_18 = (short)-30692;
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
