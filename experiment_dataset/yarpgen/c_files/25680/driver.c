#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16967;
unsigned short var_2 = (unsigned short)9129;
unsigned short var_3 = (unsigned short)30805;
unsigned short var_5 = (unsigned short)35495;
unsigned short var_10 = (unsigned short)14395;
unsigned long long int var_14 = 5954671610276261106ULL;
unsigned short var_15 = (unsigned short)39130;
int zero = 0;
unsigned short var_16 = (unsigned short)21147;
signed char var_17 = (signed char)97;
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
