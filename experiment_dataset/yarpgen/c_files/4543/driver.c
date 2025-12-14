#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1828710596;
unsigned char var_4 = (unsigned char)171;
unsigned char var_6 = (unsigned char)174;
short var_7 = (short)27179;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_13 = 2012093342;
short var_14 = (short)-31616;
unsigned long long int var_15 = 909462336295074164ULL;
int var_16 = 1873663974;
unsigned char var_17 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
