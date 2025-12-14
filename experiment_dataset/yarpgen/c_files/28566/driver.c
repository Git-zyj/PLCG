#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16074;
unsigned long long int var_5 = 2821181757764872132ULL;
unsigned short var_7 = (unsigned short)8997;
unsigned long long int var_10 = 12334179479963785491ULL;
unsigned long long int var_12 = 525028934347862184ULL;
int zero = 0;
unsigned long long int var_14 = 15606183414966535064ULL;
unsigned long long int var_15 = 13169743452185698311ULL;
long long int var_16 = 5433860274746249558LL;
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
