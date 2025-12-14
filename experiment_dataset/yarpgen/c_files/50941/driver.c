#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3181728000U;
unsigned short var_2 = (unsigned short)1876;
short var_9 = (short)10246;
short var_14 = (short)-16106;
int zero = 0;
short var_18 = (short)19198;
short var_19 = (short)3779;
short var_20 = (short)15893;
unsigned short var_21 = (unsigned short)48201;
unsigned int var_22 = 1316632197U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
