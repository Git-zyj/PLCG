#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_11 = 17108752467857334056ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)89;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 9309076048527156637ULL;
unsigned long long int var_16 = 10940014921469094896ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
