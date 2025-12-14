#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -819679404;
unsigned int var_12 = 1320920958U;
short var_14 = (short)-19898;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 297992050U;
int zero = 0;
short var_19 = (short)2066;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
