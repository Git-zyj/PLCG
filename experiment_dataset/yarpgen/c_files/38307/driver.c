#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2013982813787723542LL;
long long int var_10 = -2308225512722455691LL;
unsigned int var_12 = 2368755808U;
unsigned char var_13 = (unsigned char)130;
int zero = 0;
unsigned int var_14 = 2308739772U;
unsigned int var_15 = 3858824925U;
unsigned long long int var_16 = 11632674480060847065ULL;
unsigned int var_17 = 4190172427U;
void init() {
}

void checksum() {
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
