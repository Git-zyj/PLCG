#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4220619346U;
short var_4 = (short)-20429;
_Bool var_10 = (_Bool)1;
short var_14 = (short)20276;
int zero = 0;
unsigned char var_15 = (unsigned char)255;
int var_16 = 903202533;
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
