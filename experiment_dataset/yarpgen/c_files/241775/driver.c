#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30105;
unsigned int var_4 = 2579675028U;
unsigned int var_9 = 2775110857U;
short var_11 = (short)14726;
int zero = 0;
short var_13 = (short)9360;
short var_14 = (short)3929;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
