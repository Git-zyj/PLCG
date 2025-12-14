#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3958958491U;
int var_6 = 1301812618;
unsigned long long int var_7 = 2684981138601197343ULL;
unsigned long long int var_8 = 3388049083844490454ULL;
unsigned char var_10 = (unsigned char)172;
unsigned char var_11 = (unsigned char)246;
int zero = 0;
unsigned int var_14 = 3876769239U;
unsigned short var_15 = (unsigned short)30704;
unsigned char var_16 = (unsigned char)222;
unsigned int var_17 = 897959825U;
unsigned char var_18 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
