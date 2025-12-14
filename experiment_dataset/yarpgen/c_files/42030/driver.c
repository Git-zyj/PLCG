#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9776;
unsigned int var_4 = 3879139654U;
long long int var_6 = -8339968867595062449LL;
signed char var_12 = (signed char)26;
signed char var_15 = (signed char)91;
long long int var_16 = -5623957618866751222LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)23244;
long long int var_19 = -6370408455484704046LL;
void init() {
}

void checksum() {
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
