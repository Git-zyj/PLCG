#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-31611;
short var_5 = (short)18653;
short var_12 = (short)16789;
unsigned char var_14 = (unsigned char)54;
int zero = 0;
unsigned short var_17 = (unsigned short)39192;
long long int var_18 = 147698675864720466LL;
short var_19 = (short)1659;
unsigned short var_20 = (unsigned short)12384;
signed char var_21 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
