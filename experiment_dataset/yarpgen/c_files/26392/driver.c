#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4278176123U;
signed char var_5 = (signed char)115;
short var_15 = (short)-22989;
signed char var_17 = (signed char)41;
int zero = 0;
signed char var_20 = (signed char)-119;
unsigned int var_21 = 974093077U;
unsigned int var_22 = 3332494938U;
signed char var_23 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
