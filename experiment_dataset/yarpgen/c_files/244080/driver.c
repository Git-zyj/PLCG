#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)33;
unsigned int var_10 = 3920335592U;
signed char var_11 = (signed char)98;
short var_13 = (short)-18860;
int zero = 0;
signed char var_15 = (signed char)-115;
unsigned char var_16 = (unsigned char)185;
unsigned char var_17 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
