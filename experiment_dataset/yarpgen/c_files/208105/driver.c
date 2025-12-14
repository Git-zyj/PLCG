#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13765573236166835185ULL;
signed char var_2 = (signed char)85;
int var_3 = 784432730;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 17096159808315757969ULL;
long long int var_9 = 9002763921412838747LL;
signed char var_12 = (signed char)-73;
unsigned int var_14 = 1101166971U;
int zero = 0;
int var_15 = -463572401;
signed char var_16 = (signed char)66;
long long int var_17 = -6733988810545197369LL;
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
