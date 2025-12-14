#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)177;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 14701602558470124593ULL;
int var_14 = 77545942;
int zero = 0;
unsigned short var_15 = (unsigned short)16232;
short var_16 = (short)20315;
unsigned long long int var_17 = 9524071140051930576ULL;
short var_18 = (short)29378;
long long int var_19 = 7517110107529521400LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
