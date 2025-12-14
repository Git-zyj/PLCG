#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3286269300U;
_Bool var_2 = (_Bool)0;
long long int var_3 = -3978256525870406186LL;
unsigned int var_4 = 3932479604U;
unsigned char var_6 = (unsigned char)153;
int zero = 0;
unsigned short var_13 = (unsigned short)58872;
short var_14 = (short)-4963;
unsigned int var_15 = 324862263U;
unsigned int var_16 = 3531225391U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
