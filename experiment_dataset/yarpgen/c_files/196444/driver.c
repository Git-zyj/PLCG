#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)28646;
unsigned short var_4 = (unsigned short)28882;
unsigned int var_6 = 500234618U;
signed char var_10 = (signed char)0;
unsigned short var_11 = (unsigned short)16842;
int zero = 0;
signed char var_12 = (signed char)79;
long long int var_13 = -2214237644077662651LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
