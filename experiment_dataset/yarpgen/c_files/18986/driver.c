#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10712;
unsigned long long int var_3 = 11359693899616618604ULL;
unsigned char var_7 = (unsigned char)33;
signed char var_8 = (signed char)60;
unsigned char var_10 = (unsigned char)52;
_Bool var_11 = (_Bool)0;
short var_12 = (short)253;
int zero = 0;
signed char var_14 = (signed char)74;
short var_15 = (short)19253;
long long int var_16 = 6818359331546126675LL;
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
