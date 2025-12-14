#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)59;
int var_7 = 1054408790;
int var_9 = -1157016061;
unsigned short var_12 = (unsigned short)31475;
int var_13 = -440636234;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)24223;
int var_22 = -842510009;
int var_23 = 1888477435;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
