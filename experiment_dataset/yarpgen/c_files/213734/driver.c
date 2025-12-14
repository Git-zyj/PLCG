#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 829649437;
unsigned int var_12 = 1810744267U;
int zero = 0;
long long int var_18 = -6548900597876774827LL;
unsigned short var_19 = (unsigned short)48550;
unsigned short var_20 = (unsigned short)30919;
unsigned short var_21 = (unsigned short)54920;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
