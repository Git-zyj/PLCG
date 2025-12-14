#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1623101405;
int var_3 = -1430451700;
long long int var_8 = -2709820940496712669LL;
int zero = 0;
unsigned int var_13 = 2463480598U;
long long int var_14 = 5526255761520965005LL;
unsigned short var_15 = (unsigned short)58284;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
