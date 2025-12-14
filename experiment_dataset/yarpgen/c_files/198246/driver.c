#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15339096873281879498ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_11 = 1442027062161608603ULL;
unsigned short var_13 = (unsigned short)54083;
int zero = 0;
short var_15 = (short)-9848;
unsigned long long int var_16 = 13747361477400255494ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
