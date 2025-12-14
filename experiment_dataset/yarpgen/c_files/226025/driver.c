#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 949159759393765311ULL;
int var_9 = 1442163436;
int var_13 = 2101191462;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 7131127202898752392LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
