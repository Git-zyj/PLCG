#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1614906354;
signed char var_6 = (signed char)-30;
unsigned long long int var_7 = 14399866550498347519ULL;
int var_13 = -1919634597;
int zero = 0;
unsigned short var_16 = (unsigned short)5342;
int var_17 = 212797298;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
