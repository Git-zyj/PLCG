#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1594888992U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 612873572U;
short var_8 = (short)31592;
int zero = 0;
long long int var_10 = -7204884409817493509LL;
unsigned char var_11 = (unsigned char)4;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
