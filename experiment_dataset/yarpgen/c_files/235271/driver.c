#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28449;
unsigned short var_5 = (unsigned short)34446;
unsigned short var_7 = (unsigned short)5985;
unsigned short var_8 = (unsigned short)12813;
unsigned short var_9 = (unsigned short)28123;
unsigned short var_10 = (unsigned short)17665;
unsigned short var_12 = (unsigned short)36222;
unsigned short var_13 = (unsigned short)20559;
unsigned short var_15 = (unsigned short)61209;
int zero = 0;
unsigned short var_17 = (unsigned short)37420;
unsigned short var_18 = (unsigned short)19006;
void init() {
}

void checksum() {
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
