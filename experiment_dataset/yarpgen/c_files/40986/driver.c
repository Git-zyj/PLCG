#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned long long int var_12 = 298109172625082594ULL;
int var_14 = 1539668204;
unsigned char var_16 = (unsigned char)230;
int zero = 0;
int var_17 = 515462258;
unsigned int var_18 = 3998825393U;
unsigned char var_19 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
