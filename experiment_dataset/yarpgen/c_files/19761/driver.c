#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_6 = (short)-14351;
int var_12 = 1721051589;
int zero = 0;
unsigned short var_14 = (unsigned short)16183;
unsigned long long int var_15 = 13282443354112598566ULL;
long long int var_16 = 8338406731593585424LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
