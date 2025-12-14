#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)192;
short var_7 = (short)-12595;
unsigned int var_8 = 1054444019U;
int zero = 0;
long long int var_15 = -5332986102959929660LL;
unsigned short var_16 = (unsigned short)34717;
int var_17 = 582420513;
void init() {
}

void checksum() {
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
