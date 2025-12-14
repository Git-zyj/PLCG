#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
short var_9 = (short)9199;
unsigned int var_12 = 2103998970U;
unsigned char var_14 = (unsigned char)4;
int zero = 0;
int var_17 = 672691999;
unsigned char var_18 = (unsigned char)125;
void init() {
}

void checksum() {
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
