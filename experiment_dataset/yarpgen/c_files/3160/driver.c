#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)242;
unsigned short var_7 = (unsigned short)1209;
unsigned short var_8 = (unsigned short)7522;
long long int var_11 = -6342760751206720592LL;
short var_16 = (short)30475;
int zero = 0;
unsigned short var_19 = (unsigned short)42981;
unsigned char var_20 = (unsigned char)32;
long long int var_21 = -8327462793616450078LL;
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
