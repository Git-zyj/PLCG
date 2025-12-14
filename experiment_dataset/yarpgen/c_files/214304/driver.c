#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7529647514575044732LL;
signed char var_1 = (signed char)22;
signed char var_3 = (signed char)117;
signed char var_4 = (signed char)-19;
signed char var_5 = (signed char)-16;
signed char var_15 = (signed char)-68;
int zero = 0;
signed char var_16 = (signed char)-20;
short var_17 = (short)-8193;
void init() {
}

void checksum() {
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
