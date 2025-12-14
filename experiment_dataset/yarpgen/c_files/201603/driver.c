#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28545;
unsigned int var_2 = 1981101809U;
_Bool var_4 = (_Bool)0;
long long int var_5 = 8995037898963892731LL;
int zero = 0;
short var_14 = (short)-6943;
unsigned short var_15 = (unsigned short)45507;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
