#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1553729276U;
short var_2 = (short)16656;
unsigned int var_5 = 3532115283U;
int var_7 = 236546789;
unsigned int var_12 = 1528463174U;
unsigned int var_14 = 888580151U;
int zero = 0;
unsigned long long int var_15 = 18228776839464317371ULL;
long long int var_16 = 1126893563300910726LL;
unsigned long long int var_17 = 9918025674644360162ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
