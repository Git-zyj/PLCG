#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 121918367347677239LL;
signed char var_3 = (signed char)8;
long long int var_4 = -5979237605889501782LL;
short var_6 = (short)-544;
unsigned short var_7 = (unsigned short)14441;
int zero = 0;
unsigned char var_10 = (unsigned char)238;
short var_11 = (short)25582;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
