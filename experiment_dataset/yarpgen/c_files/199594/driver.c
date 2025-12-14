#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2313501172U;
short var_3 = (short)-336;
unsigned char var_4 = (unsigned char)64;
short var_13 = (short)23387;
int zero = 0;
int var_15 = 1368601929;
short var_16 = (short)-30264;
unsigned long long int var_17 = 5229547048834302224ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
