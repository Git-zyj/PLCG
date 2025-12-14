#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
unsigned short var_7 = (unsigned short)62070;
int var_10 = 1791479461;
int var_15 = -1068363593;
short var_17 = (short)32281;
int zero = 0;
unsigned short var_20 = (unsigned short)7914;
unsigned int var_21 = 3177017401U;
int var_22 = 2057298376;
short var_23 = (short)22096;
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
