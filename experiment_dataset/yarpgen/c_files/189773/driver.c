#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8006550704931757677ULL;
int var_5 = -613970763;
signed char var_6 = (signed char)53;
signed char var_10 = (signed char)-111;
int var_11 = 1990049631;
short var_14 = (short)3668;
int var_17 = -1862956311;
int zero = 0;
unsigned long long int var_18 = 7448945300091631284ULL;
unsigned char var_19 = (unsigned char)112;
long long int var_20 = -2723217944174685841LL;
void init() {
}

void checksum() {
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
