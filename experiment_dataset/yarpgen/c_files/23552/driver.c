#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1766871368;
int var_11 = 1313009136;
unsigned int var_12 = 3360592135U;
short var_13 = (short)7304;
int zero = 0;
short var_19 = (short)-23953;
short var_20 = (short)6165;
short var_21 = (short)-29041;
void init() {
}

void checksum() {
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
