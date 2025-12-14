#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -5900980785882689064LL;
signed char var_13 = (signed char)24;
int zero = 0;
signed char var_20 = (signed char)79;
short var_21 = (short)-17745;
signed char var_22 = (signed char)84;
unsigned short var_23 = (unsigned short)42559;
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
