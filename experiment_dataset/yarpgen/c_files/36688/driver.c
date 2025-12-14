#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)58665;
unsigned char var_7 = (unsigned char)192;
short var_12 = (short)-1723;
int zero = 0;
unsigned short var_17 = (unsigned short)39747;
short var_18 = (short)28680;
short var_19 = (short)30109;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
