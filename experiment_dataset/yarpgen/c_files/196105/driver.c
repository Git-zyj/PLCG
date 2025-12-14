#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-19084;
unsigned char var_16 = (unsigned char)242;
int zero = 0;
unsigned char var_19 = (unsigned char)142;
unsigned short var_20 = (unsigned short)10624;
unsigned int var_21 = 3593730981U;
long long int var_22 = 4280838237451499534LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
