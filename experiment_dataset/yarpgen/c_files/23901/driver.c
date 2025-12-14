#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3111958476U;
short var_2 = (short)29131;
int var_4 = 1886313384;
long long int var_7 = -684899738748160886LL;
int zero = 0;
unsigned short var_14 = (unsigned short)32818;
short var_15 = (short)-19652;
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
