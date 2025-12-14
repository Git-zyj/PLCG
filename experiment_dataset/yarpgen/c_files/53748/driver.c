#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30026;
short var_3 = (short)-8477;
unsigned char var_5 = (unsigned char)92;
unsigned short var_10 = (unsigned short)55516;
unsigned char var_12 = (unsigned char)173;
long long int var_13 = 8579589583257913461LL;
int zero = 0;
long long int var_18 = 61138697935290412LL;
int var_19 = -115346077;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
