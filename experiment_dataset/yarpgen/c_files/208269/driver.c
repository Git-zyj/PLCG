#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-11;
short var_2 = (short)6829;
short var_8 = (short)2198;
short var_16 = (short)-16550;
int zero = 0;
unsigned long long int var_20 = 15885210761567141846ULL;
short var_21 = (short)-27544;
unsigned int var_22 = 2059468348U;
short var_23 = (short)28538;
unsigned char var_24 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
