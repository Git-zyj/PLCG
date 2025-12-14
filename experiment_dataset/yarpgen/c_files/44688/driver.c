#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1416340943;
unsigned short var_8 = (unsigned short)55281;
unsigned int var_10 = 998005326U;
unsigned short var_13 = (unsigned short)61295;
unsigned short var_15 = (unsigned short)64659;
int zero = 0;
unsigned short var_16 = (unsigned short)24832;
unsigned long long int var_17 = 4960938084629391085ULL;
short var_18 = (short)-24398;
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
