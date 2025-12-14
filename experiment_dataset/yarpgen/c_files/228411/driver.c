#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 326734047U;
unsigned long long int var_12 = 7203982156430385662ULL;
unsigned long long int var_13 = 5842550765418066211ULL;
int zero = 0;
unsigned long long int var_14 = 2563358247194921626ULL;
unsigned long long int var_15 = 12952105475254451579ULL;
long long int var_16 = 2663627354890254250LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
