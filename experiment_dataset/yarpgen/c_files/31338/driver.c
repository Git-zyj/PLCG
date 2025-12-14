#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 716639033U;
int var_3 = 912657102;
unsigned short var_13 = (unsigned short)23917;
unsigned short var_14 = (unsigned short)42932;
unsigned short var_15 = (unsigned short)9603;
int zero = 0;
signed char var_16 = (signed char)61;
int var_17 = 131625832;
int var_18 = 481323982;
long long int var_19 = -1423580961646352497LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
