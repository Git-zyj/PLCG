#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_6 = (short)31456;
unsigned long long int var_8 = 8352298141943190622ULL;
unsigned long long int var_12 = 13665463790449032761ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)112;
int var_14 = -472181683;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
