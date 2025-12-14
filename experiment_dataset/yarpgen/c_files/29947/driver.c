#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4281820323U;
signed char var_3 = (signed char)116;
int var_6 = -1170511733;
int var_8 = 1056053075;
int var_14 = -1259635549;
int zero = 0;
int var_15 = 128003072;
int var_16 = -7513953;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
