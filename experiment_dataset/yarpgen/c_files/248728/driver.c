#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1672863007;
unsigned int var_8 = 2900912788U;
signed char var_12 = (signed char)-6;
short var_13 = (short)3211;
int zero = 0;
short var_14 = (short)18425;
unsigned short var_15 = (unsigned short)46479;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
