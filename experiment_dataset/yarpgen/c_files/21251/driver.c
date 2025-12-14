#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3719535320U;
long long int var_5 = 617498419767880469LL;
unsigned int var_9 = 1879268631U;
signed char var_11 = (signed char)110;
unsigned int var_12 = 1486467229U;
int zero = 0;
short var_19 = (short)-22552;
short var_20 = (short)30816;
signed char var_21 = (signed char)-88;
unsigned int var_22 = 3282365363U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
