#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11491;
unsigned char var_5 = (unsigned char)13;
long long int var_8 = -4437153421439691225LL;
unsigned short var_9 = (unsigned short)34780;
long long int var_11 = 325144288911944924LL;
signed char var_13 = (signed char)84;
int zero = 0;
unsigned short var_14 = (unsigned short)37713;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2441442189U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
