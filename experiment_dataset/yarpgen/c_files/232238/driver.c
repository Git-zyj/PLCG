#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-95;
int var_10 = 865187888;
unsigned int var_11 = 4093022430U;
int zero = 0;
unsigned int var_12 = 1561185769U;
short var_13 = (short)-9480;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
