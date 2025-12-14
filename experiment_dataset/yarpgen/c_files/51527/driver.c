#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1018622872U;
short var_10 = (short)-21136;
int zero = 0;
unsigned short var_13 = (unsigned short)60125;
unsigned long long int var_14 = 2663679658171298100ULL;
unsigned long long int var_15 = 2918195240142062183ULL;
int var_16 = 23316242;
short var_17 = (short)9747;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
