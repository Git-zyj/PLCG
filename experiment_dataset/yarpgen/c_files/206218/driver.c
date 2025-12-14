#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 959375837;
int var_7 = 1779199331;
unsigned long long int var_11 = 5286413299779294653ULL;
long long int var_17 = -6079118656343607560LL;
int zero = 0;
unsigned int var_19 = 890174942U;
int var_20 = 580576227;
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
