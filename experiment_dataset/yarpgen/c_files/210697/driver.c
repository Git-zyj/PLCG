#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1998523539392933271LL;
unsigned long long int var_8 = 10237718062874421096ULL;
short var_9 = (short)-17100;
unsigned char var_10 = (unsigned char)144;
short var_12 = (short)-13503;
signed char var_16 = (signed char)-122;
int zero = 0;
signed char var_18 = (signed char)-95;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)1;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
