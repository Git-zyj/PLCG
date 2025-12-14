#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 352014791U;
short var_2 = (short)26410;
_Bool var_3 = (_Bool)1;
short var_5 = (short)11459;
long long int var_7 = 8201559042784493444LL;
unsigned int var_10 = 4255449992U;
short var_11 = (short)-28166;
int zero = 0;
short var_12 = (short)11494;
unsigned short var_13 = (unsigned short)58476;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
