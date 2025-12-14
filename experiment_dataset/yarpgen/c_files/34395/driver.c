#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1350993782;
unsigned short var_1 = (unsigned short)55955;
short var_4 = (short)-16824;
short var_7 = (short)6847;
_Bool var_9 = (_Bool)1;
short var_11 = (short)2713;
int zero = 0;
unsigned int var_13 = 2428599832U;
signed char var_14 = (signed char)-56;
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
