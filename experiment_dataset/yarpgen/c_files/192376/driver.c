#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1724708319;
short var_6 = (short)14006;
long long int var_7 = -4423069755320357224LL;
unsigned short var_11 = (unsigned short)58272;
int zero = 0;
unsigned char var_15 = (unsigned char)51;
short var_16 = (short)-17080;
unsigned int var_17 = 1848242003U;
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
