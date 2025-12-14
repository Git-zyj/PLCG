#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 120199037;
unsigned long long int var_13 = 12332340655173274174ULL;
long long int var_14 = -7738272803792652288LL;
int var_15 = 1579498692;
int zero = 0;
unsigned char var_19 = (unsigned char)64;
long long int var_20 = 1911108348510911227LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
