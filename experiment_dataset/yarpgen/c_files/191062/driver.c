#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24619;
unsigned long long int var_1 = 275022651490584983ULL;
long long int var_3 = 3685878018977818187LL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-7143;
unsigned int var_9 = 1498054274U;
short var_11 = (short)5239;
unsigned int var_12 = 3602346074U;
unsigned char var_13 = (unsigned char)28;
int zero = 0;
long long int var_16 = -288151662214961562LL;
unsigned int var_17 = 3616230574U;
void init() {
}

void checksum() {
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
