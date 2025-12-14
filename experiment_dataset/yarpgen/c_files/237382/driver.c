#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)54;
unsigned char var_5 = (unsigned char)28;
_Bool var_8 = (_Bool)1;
int var_10 = -264801415;
short var_11 = (short)6813;
int zero = 0;
int var_12 = 360694254;
short var_13 = (short)-2960;
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
