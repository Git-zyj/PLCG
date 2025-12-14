#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1067172554;
unsigned char var_2 = (unsigned char)39;
int var_4 = -898680164;
unsigned char var_5 = (unsigned char)62;
short var_9 = (short)-28826;
int var_10 = -167549382;
int var_12 = -69945646;
int var_14 = -328593503;
unsigned short var_15 = (unsigned short)48434;
unsigned short var_16 = (unsigned short)13910;
int zero = 0;
unsigned char var_17 = (unsigned char)183;
int var_18 = 1800306501;
int var_19 = 966287343;
unsigned long long int var_20 = 11296037357292093081ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
