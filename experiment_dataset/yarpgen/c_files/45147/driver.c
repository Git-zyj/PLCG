#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 94843330;
unsigned char var_10 = (unsigned char)243;
long long int var_12 = 656655984652510142LL;
int zero = 0;
unsigned char var_19 = (unsigned char)134;
short var_20 = (short)-17186;
void init() {
}

void checksum() {
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
