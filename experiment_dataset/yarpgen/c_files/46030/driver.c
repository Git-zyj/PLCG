#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1946188643;
short var_2 = (short)2915;
int var_3 = 458182742;
unsigned int var_5 = 3996724183U;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-29166;
int zero = 0;
unsigned long long int var_13 = 4442362204897684358ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)59482;
short var_16 = (short)12983;
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
