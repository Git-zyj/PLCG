#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1658;
signed char var_1 = (signed char)-59;
short var_2 = (short)12915;
unsigned char var_4 = (unsigned char)76;
unsigned char var_13 = (unsigned char)58;
int zero = 0;
short var_16 = (short)-12929;
long long int var_17 = -3484769733497626683LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
