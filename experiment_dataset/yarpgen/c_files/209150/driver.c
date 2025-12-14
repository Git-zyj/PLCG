#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)144;
_Bool var_7 = (_Bool)0;
short var_11 = (short)27474;
unsigned char var_17 = (unsigned char)165;
unsigned int var_18 = 3930910227U;
unsigned char var_19 = (unsigned char)140;
int zero = 0;
int var_20 = 321051854;
unsigned int var_21 = 3006099479U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
