#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 6945360902749289064ULL;
unsigned long long int var_10 = 16928436055780079360ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 363337259459728154ULL;
unsigned short var_16 = (unsigned short)6459;
unsigned long long int var_17 = 8902104184235049008ULL;
void init() {
}

void checksum() {
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
