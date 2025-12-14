#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)27124;
short var_8 = (short)-14194;
short var_14 = (short)14689;
signed char var_16 = (signed char)-7;
long long int var_17 = 3347963658133297267LL;
int zero = 0;
unsigned short var_18 = (unsigned short)29213;
unsigned short var_19 = (unsigned short)27725;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
