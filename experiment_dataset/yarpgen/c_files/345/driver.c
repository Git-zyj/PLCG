#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)24220;
long long int var_11 = -3933374748219414679LL;
unsigned short var_14 = (unsigned short)12398;
int zero = 0;
int var_17 = -2141306036;
unsigned int var_18 = 4135802617U;
unsigned char var_19 = (unsigned char)154;
unsigned short var_20 = (unsigned short)49570;
unsigned long long int var_21 = 7429265181456269368ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
