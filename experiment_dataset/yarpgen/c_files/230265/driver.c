#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-86;
_Bool var_3 = (_Bool)0;
int var_4 = 1257067621;
long long int var_5 = 4594314412185692260LL;
unsigned char var_15 = (unsigned char)171;
int zero = 0;
short var_17 = (short)6933;
unsigned char var_18 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
