#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_5 = 384715344;
int var_6 = 1108951664;
signed char var_7 = (signed char)92;
int var_9 = 181075944;
int var_16 = 1479688972;
int zero = 0;
short var_19 = (short)31795;
unsigned long long int var_20 = 16300879085347739034ULL;
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
