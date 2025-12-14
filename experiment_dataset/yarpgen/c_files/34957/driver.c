#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9736594645980645151ULL;
unsigned long long int var_13 = 974325865646430867ULL;
unsigned long long int var_14 = 1938217577571857900ULL;
int zero = 0;
int var_15 = 494467579;
unsigned long long int var_16 = 5662007824441909067ULL;
int var_17 = -512681698;
unsigned int var_18 = 2394683633U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
