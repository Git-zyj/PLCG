#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-92;
_Bool var_4 = (_Bool)0;
short var_7 = (short)-21611;
int var_9 = -1467083167;
short var_10 = (short)26477;
unsigned int var_12 = 340500573U;
int zero = 0;
unsigned short var_13 = (unsigned short)43673;
int var_14 = -1440357767;
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
