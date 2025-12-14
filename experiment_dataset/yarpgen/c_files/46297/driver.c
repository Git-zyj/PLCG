#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)61;
unsigned int var_8 = 2691850520U;
short var_10 = (short)18422;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 1943802880749899584ULL;
unsigned char var_14 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
