#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
unsigned short var_3 = (unsigned short)17881;
unsigned short var_8 = (unsigned short)64716;
int var_10 = 1085176600;
unsigned char var_11 = (unsigned char)126;
long long int var_12 = -3044690332336135832LL;
unsigned int var_14 = 3398737878U;
unsigned short var_15 = (unsigned short)42793;
int zero = 0;
signed char var_17 = (signed char)25;
unsigned short var_18 = (unsigned short)61900;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
