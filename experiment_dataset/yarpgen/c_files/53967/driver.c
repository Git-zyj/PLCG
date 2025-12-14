#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1366158562U;
short var_2 = (short)8705;
short var_7 = (short)-13108;
unsigned int var_12 = 981464236U;
unsigned short var_13 = (unsigned short)6769;
short var_17 = (short)7678;
int zero = 0;
unsigned long long int var_20 = 15751502301833068065ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
