#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5655510498304465905LL;
short var_6 = (short)2680;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 17158779920495713696ULL;
short var_17 = (short)2498;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-7273;
unsigned char var_22 = (unsigned char)240;
signed char var_23 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
