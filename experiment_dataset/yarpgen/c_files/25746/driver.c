#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)38;
unsigned char var_4 = (unsigned char)167;
long long int var_6 = 1683313694377181026LL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)75;
unsigned char var_15 = (unsigned char)255;
signed char var_17 = (signed char)102;
int zero = 0;
signed char var_19 = (signed char)77;
unsigned int var_20 = 2231627681U;
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
