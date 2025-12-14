#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1417765362;
short var_1 = (short)23411;
unsigned char var_2 = (unsigned char)243;
long long int var_5 = -8453782343382042888LL;
unsigned short var_8 = (unsigned short)33224;
unsigned long long int var_9 = 8566965321067199143ULL;
unsigned char var_10 = (unsigned char)253;
unsigned short var_11 = (unsigned short)6699;
unsigned char var_12 = (unsigned char)139;
int zero = 0;
int var_14 = -2003279862;
unsigned char var_15 = (unsigned char)190;
int var_16 = 544777248;
int var_17 = 1240281853;
void init() {
}

void checksum() {
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
