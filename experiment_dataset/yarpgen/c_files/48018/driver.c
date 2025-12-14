#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7833680179545764915LL;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 3024754039U;
short var_12 = (short)-20952;
int zero = 0;
int var_15 = 1575666241;
int var_16 = 2092295811;
unsigned char var_17 = (unsigned char)4;
unsigned short var_18 = (unsigned short)9419;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
