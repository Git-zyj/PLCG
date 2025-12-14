#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1814250803384811626LL;
unsigned long long int var_6 = 8713011688979364636ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-51;
long long int var_12 = -8603880519795068509LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
