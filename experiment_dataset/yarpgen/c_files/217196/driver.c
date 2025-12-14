#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 764958697U;
short var_7 = (short)-7421;
signed char var_8 = (signed char)-125;
signed char var_9 = (signed char)-59;
int zero = 0;
long long int var_11 = -5835963186178965164LL;
unsigned int var_12 = 1426912934U;
int var_13 = 614729712;
long long int var_14 = -3939211367914108263LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
