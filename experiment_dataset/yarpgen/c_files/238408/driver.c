#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 52034246;
signed char var_5 = (signed char)28;
short var_7 = (short)22241;
int zero = 0;
short var_10 = (short)-20046;
unsigned short var_11 = (unsigned short)162;
signed char var_12 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
