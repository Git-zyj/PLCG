#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
unsigned char var_5 = (unsigned char)199;
signed char var_10 = (signed char)65;
unsigned char var_12 = (unsigned char)92;
unsigned char var_14 = (unsigned char)85;
int zero = 0;
short var_15 = (short)-12569;
unsigned char var_16 = (unsigned char)13;
short var_17 = (short)-12724;
short var_18 = (short)29221;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
