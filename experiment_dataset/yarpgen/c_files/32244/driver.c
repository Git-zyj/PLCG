#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2348928871U;
unsigned short var_4 = (unsigned short)29340;
unsigned long long int var_11 = 14637508458415228322ULL;
short var_12 = (short)16842;
unsigned int var_13 = 272379139U;
int zero = 0;
long long int var_14 = -4352629993661150112LL;
unsigned short var_15 = (unsigned short)39571;
unsigned long long int var_16 = 11667208241905624783ULL;
unsigned short var_17 = (unsigned short)23044;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
