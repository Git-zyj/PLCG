#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_4 = 1033945220;
_Bool var_7 = (_Bool)1;
short var_13 = (short)-23605;
unsigned short var_14 = (unsigned short)31058;
int zero = 0;
unsigned int var_15 = 1293474208U;
signed char var_16 = (signed char)16;
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
