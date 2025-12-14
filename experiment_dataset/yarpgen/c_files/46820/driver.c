#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42982;
unsigned short var_5 = (unsigned short)46305;
unsigned short var_8 = (unsigned short)48068;
unsigned short var_12 = (unsigned short)21639;
unsigned short var_13 = (unsigned short)2830;
int zero = 0;
unsigned short var_15 = (unsigned short)28877;
unsigned short var_16 = (unsigned short)17460;
unsigned short var_17 = (unsigned short)24566;
unsigned short var_18 = (unsigned short)39040;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
