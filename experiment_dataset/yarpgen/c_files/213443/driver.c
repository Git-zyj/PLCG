#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21336;
unsigned short var_1 = (unsigned short)52430;
int var_6 = -1120953115;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)13473;
unsigned short var_15 = (unsigned short)20433;
signed char var_16 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
