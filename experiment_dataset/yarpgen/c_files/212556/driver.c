#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -649396174;
signed char var_2 = (signed char)-22;
unsigned long long int var_3 = 6434209015296247204ULL;
short var_7 = (short)-17465;
unsigned int var_10 = 4026076753U;
int zero = 0;
short var_15 = (short)-19023;
unsigned char var_16 = (unsigned char)140;
short var_17 = (short)-14582;
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
