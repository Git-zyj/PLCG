#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1304480514882788351ULL;
long long int var_14 = -5698266073215950146LL;
int zero = 0;
unsigned int var_16 = 1505908987U;
unsigned long long int var_17 = 7466889733429222184ULL;
signed char var_18 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
