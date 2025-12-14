#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 6383640482026355033ULL;
int var_9 = -827248856;
unsigned short var_10 = (unsigned short)64978;
short var_14 = (short)27875;
int zero = 0;
unsigned int var_20 = 788849783U;
int var_21 = 467798949;
unsigned char var_22 = (unsigned char)156;
int var_23 = -186107634;
int var_24 = 1735567902;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
