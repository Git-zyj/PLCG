#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -482523660;
unsigned short var_1 = (unsigned short)5477;
unsigned short var_5 = (unsigned short)26539;
unsigned char var_8 = (unsigned char)186;
int zero = 0;
unsigned short var_16 = (unsigned short)55886;
short var_17 = (short)-8875;
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
