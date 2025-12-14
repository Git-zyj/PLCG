#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_6 = (short)6668;
int var_7 = 2091714344;
short var_8 = (short)105;
short var_12 = (short)-19389;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)204;
unsigned short var_16 = (unsigned short)5619;
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
