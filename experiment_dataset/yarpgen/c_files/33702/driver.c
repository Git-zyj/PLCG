#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -217434074;
unsigned int var_6 = 1132224458U;
int zero = 0;
signed char var_14 = (signed char)62;
unsigned short var_15 = (unsigned short)45388;
unsigned int var_16 = 38043114U;
unsigned short var_17 = (unsigned short)42146;
signed char var_18 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
