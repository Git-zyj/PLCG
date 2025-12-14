#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4626083151030459850LL;
unsigned short var_5 = (unsigned short)3519;
unsigned long long int var_6 = 2724555681323013851ULL;
unsigned int var_8 = 189359845U;
unsigned short var_9 = (unsigned short)65008;
int zero = 0;
long long int var_10 = -8147793640423596922LL;
unsigned char var_11 = (unsigned char)125;
long long int var_12 = -8619740148055151812LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
