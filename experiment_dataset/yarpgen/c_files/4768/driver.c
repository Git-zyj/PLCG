#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54602;
unsigned short var_4 = (unsigned short)51150;
unsigned short var_8 = (unsigned short)39710;
unsigned short var_11 = (unsigned short)32644;
unsigned short var_12 = (unsigned short)64125;
unsigned short var_15 = (unsigned short)36616;
int zero = 0;
unsigned short var_17 = (unsigned short)9972;
unsigned short var_18 = (unsigned short)45853;
short var_19 = (short)23125;
short var_20 = (short)-530;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
