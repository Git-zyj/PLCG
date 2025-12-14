#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17627;
signed char var_1 = (signed char)62;
short var_5 = (short)25883;
_Bool var_6 = (_Bool)1;
unsigned long long int var_12 = 11225396168905566420ULL;
short var_13 = (short)-12039;
int zero = 0;
long long int var_15 = -7317695389055889326LL;
unsigned char var_16 = (unsigned char)41;
long long int var_17 = -8728125449892137810LL;
_Bool var_18 = (_Bool)0;
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
