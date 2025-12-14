#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -471084865961645797LL;
unsigned short var_13 = (unsigned short)28700;
unsigned int var_14 = 1259149632U;
long long int var_15 = 8930254483117577644LL;
unsigned short var_16 = (unsigned short)57074;
int zero = 0;
unsigned char var_19 = (unsigned char)2;
int var_20 = 1898981744;
unsigned short var_21 = (unsigned short)31534;
unsigned long long int var_22 = 3511531183497142364ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
