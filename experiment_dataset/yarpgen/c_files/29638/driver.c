#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)1;
signed char var_16 = (signed char)-61;
unsigned long long int var_19 = 14172390041536484444ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)56;
_Bool var_21 = (_Bool)1;
int var_22 = 14952562;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
