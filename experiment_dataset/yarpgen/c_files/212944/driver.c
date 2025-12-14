#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1573397084;
long long int var_3 = -8678202459260512303LL;
short var_12 = (short)14040;
unsigned char var_13 = (unsigned char)170;
int zero = 0;
long long int var_20 = -7467030936057485597LL;
signed char var_21 = (signed char)65;
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
