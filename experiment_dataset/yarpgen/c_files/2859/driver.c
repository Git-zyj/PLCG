#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 284655181;
long long int var_5 = 9017137379916014651LL;
int var_7 = -1931402741;
int zero = 0;
short var_11 = (short)23796;
unsigned short var_12 = (unsigned short)51451;
unsigned long long int var_13 = 10218983561807702844ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
