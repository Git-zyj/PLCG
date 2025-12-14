#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4911861396929535789LL;
long long int var_4 = -7540983750721407650LL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-12;
int zero = 0;
long long int var_15 = -7563005362254938825LL;
long long int var_16 = -6231492112220638156LL;
void init() {
}

void checksum() {
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
