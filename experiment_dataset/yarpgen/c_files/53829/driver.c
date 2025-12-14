#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)54;
signed char var_10 = (signed char)-9;
long long int var_12 = 244394825726015690LL;
unsigned char var_15 = (unsigned char)143;
unsigned long long int var_19 = 1456546258447123035ULL;
int zero = 0;
short var_20 = (short)-10400;
long long int var_21 = 8168942044835067340LL;
unsigned short var_22 = (unsigned short)55690;
void init() {
}

void checksum() {
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
