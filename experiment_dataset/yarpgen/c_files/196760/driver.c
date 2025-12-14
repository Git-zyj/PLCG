#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3134633369U;
unsigned short var_4 = (unsigned short)48658;
long long int var_5 = 5643443566949417366LL;
long long int var_15 = -1871847254217572372LL;
int zero = 0;
unsigned int var_16 = 1365663406U;
unsigned int var_17 = 349205767U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
