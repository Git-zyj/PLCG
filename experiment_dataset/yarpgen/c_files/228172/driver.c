#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_14 = 12464134184855761820ULL;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = -904574494;
long long int var_21 = 8703480167380628982LL;
unsigned int var_22 = 1422141653U;
int var_23 = 212507980;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
