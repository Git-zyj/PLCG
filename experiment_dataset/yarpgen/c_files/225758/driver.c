#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2889231667U;
short var_5 = (short)28042;
unsigned char var_12 = (unsigned char)30;
unsigned char var_17 = (unsigned char)83;
int zero = 0;
int var_19 = -839978485;
short var_20 = (short)9274;
long long int var_21 = -6883594818725654090LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
