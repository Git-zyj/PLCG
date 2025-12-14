#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2491;
int var_4 = -310957228;
unsigned short var_8 = (unsigned short)53711;
int var_9 = 271804028;
unsigned char var_11 = (unsigned char)178;
signed char var_13 = (signed char)18;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 696577842U;
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
