#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
signed char var_2 = (signed char)114;
short var_6 = (short)-26872;
unsigned short var_7 = (unsigned short)49377;
short var_11 = (short)-16;
_Bool var_12 = (_Bool)1;
long long int var_13 = -973786196858356825LL;
int zero = 0;
unsigned char var_14 = (unsigned char)239;
signed char var_15 = (signed char)88;
unsigned short var_16 = (unsigned short)49111;
long long int var_17 = 473854575080126107LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
