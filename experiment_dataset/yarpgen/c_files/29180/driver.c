#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2477457648U;
signed char var_12 = (signed char)-48;
unsigned int var_13 = 2633941892U;
int zero = 0;
unsigned int var_20 = 987121344U;
int var_21 = -1138359366;
short var_22 = (short)-12399;
void init() {
}

void checksum() {
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
