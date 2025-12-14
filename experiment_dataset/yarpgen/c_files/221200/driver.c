#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2028232444U;
unsigned int var_5 = 4293738653U;
signed char var_6 = (signed char)76;
unsigned long long int var_8 = 11714279865671469909ULL;
unsigned short var_9 = (unsigned short)56854;
long long int var_12 = 3000574308727531034LL;
int zero = 0;
short var_13 = (short)-1014;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
