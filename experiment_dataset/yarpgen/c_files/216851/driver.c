#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1837926737;
unsigned long long int var_2 = 14524738296925065221ULL;
short var_7 = (short)10873;
short var_10 = (short)14590;
int zero = 0;
unsigned long long int var_12 = 15501181397895016502ULL;
unsigned int var_13 = 4171242U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
