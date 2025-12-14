#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_5 = -534372144;
unsigned int var_8 = 2571475065U;
signed char var_10 = (signed char)63;
int zero = 0;
unsigned int var_11 = 572696737U;
unsigned int var_12 = 1420516019U;
unsigned char var_13 = (unsigned char)104;
unsigned char var_14 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
