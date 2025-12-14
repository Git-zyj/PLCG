#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)8993;
short var_6 = (short)6591;
int zero = 0;
unsigned char var_12 = (unsigned char)92;
short var_13 = (short)-7301;
unsigned short var_14 = (unsigned short)33710;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
