#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24703;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)135;
signed char var_11 = (signed char)-91;
unsigned char var_14 = (unsigned char)16;
int zero = 0;
unsigned int var_15 = 750418213U;
signed char var_16 = (signed char)-7;
int var_17 = 2009472061;
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
