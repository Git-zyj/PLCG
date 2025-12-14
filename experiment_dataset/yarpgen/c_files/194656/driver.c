#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2907783673U;
unsigned short var_5 = (unsigned short)33205;
int var_13 = 691784825;
unsigned long long int var_14 = 15985830729178577874ULL;
short var_16 = (short)20288;
int zero = 0;
unsigned int var_17 = 1273979844U;
unsigned int var_18 = 4276191990U;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)31146;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
