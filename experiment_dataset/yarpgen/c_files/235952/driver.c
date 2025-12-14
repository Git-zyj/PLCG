#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26517;
unsigned long long int var_1 = 993201646332711319ULL;
unsigned int var_7 = 345081576U;
short var_10 = (short)-7809;
unsigned short var_14 = (unsigned short)9764;
int zero = 0;
int var_15 = -2094350875;
long long int var_16 = 1427032580411905282LL;
unsigned int var_17 = 3303737774U;
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
