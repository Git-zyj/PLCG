#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -417319770699806678LL;
long long int var_7 = -480811303621304109LL;
unsigned int var_9 = 2372538321U;
int var_10 = 2118780693;
int var_12 = 1233553209;
int zero = 0;
unsigned int var_13 = 2235078425U;
unsigned int var_14 = 2479173088U;
unsigned long long int var_15 = 3448569285013920495ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
