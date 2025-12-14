#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9715;
short var_4 = (short)-13750;
int var_9 = 1404563561;
int zero = 0;
unsigned long long int var_14 = 5455985276977028948ULL;
unsigned short var_15 = (unsigned short)38875;
signed char var_16 = (signed char)120;
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
