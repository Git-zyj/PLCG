#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)64971;
unsigned long long int var_6 = 8718556822368272050ULL;
unsigned char var_8 = (unsigned char)124;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)21454;
short var_14 = (short)-1144;
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
