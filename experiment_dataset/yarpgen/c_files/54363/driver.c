#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)168;
unsigned char var_4 = (unsigned char)113;
unsigned long long int var_6 = 2620756169595971928ULL;
unsigned short var_8 = (unsigned short)17975;
int var_10 = -877115241;
int zero = 0;
unsigned char var_14 = (unsigned char)34;
int var_15 = -2044379958;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
