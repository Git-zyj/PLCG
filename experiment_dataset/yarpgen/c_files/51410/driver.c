#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_8 = -2128056331;
unsigned int var_11 = 616491304U;
unsigned short var_12 = (unsigned short)1414;
signed char var_13 = (signed char)79;
int zero = 0;
unsigned int var_17 = 1538290643U;
short var_18 = (short)-28721;
void init() {
}

void checksum() {
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
