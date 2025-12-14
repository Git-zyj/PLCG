#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4557013402547511874LL;
int var_4 = 562569616;
short var_12 = (short)-32190;
unsigned short var_16 = (unsigned short)2436;
long long int var_17 = -2498565794237547918LL;
int zero = 0;
short var_20 = (short)-31789;
long long int var_21 = -5196850040454097311LL;
long long int var_22 = -2888892609398253792LL;
unsigned int var_23 = 3165660822U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
