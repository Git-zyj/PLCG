#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1742060619;
short var_4 = (short)32362;
signed char var_7 = (signed char)73;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3371545539U;
short var_17 = (short)-28963;
short var_18 = (short)22860;
void init() {
}

void checksum() {
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
