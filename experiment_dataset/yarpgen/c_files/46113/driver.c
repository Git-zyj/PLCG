#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7178951600515024439LL;
signed char var_6 = (signed char)60;
unsigned int var_10 = 160969796U;
int var_13 = -2050446049;
signed char var_14 = (signed char)-88;
int zero = 0;
unsigned char var_16 = (unsigned char)243;
short var_17 = (short)6642;
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
