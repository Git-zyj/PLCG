#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -38240854;
long long int var_5 = 7900739374460965789LL;
unsigned long long int var_8 = 9445588532939712823ULL;
unsigned int var_10 = 3949073834U;
int zero = 0;
int var_14 = -801266307;
long long int var_15 = 3397533861301673069LL;
unsigned int var_16 = 78617536U;
int var_17 = -224829870;
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
