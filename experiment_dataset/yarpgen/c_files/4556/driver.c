#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)138;
unsigned int var_5 = 3999396382U;
long long int var_6 = 8100549526053368999LL;
unsigned int var_10 = 3141670589U;
int zero = 0;
long long int var_11 = -8090185199876706430LL;
long long int var_12 = -3980227209405492475LL;
void init() {
}

void checksum() {
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
