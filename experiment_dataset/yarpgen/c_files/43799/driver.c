#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 858485854;
short var_7 = (short)-8929;
signed char var_8 = (signed char)106;
short var_9 = (short)30831;
int var_10 = 1114300873;
int zero = 0;
signed char var_15 = (signed char)-42;
int var_16 = -1409609965;
short var_17 = (short)8220;
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
