#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16298440687835874471ULL;
unsigned char var_12 = (unsigned char)94;
unsigned long long int var_14 = 12545913207661261493ULL;
int zero = 0;
long long int var_16 = 3945700272370412021LL;
unsigned short var_17 = (unsigned short)49342;
long long int var_18 = -212898239860346130LL;
short var_19 = (short)-12022;
unsigned long long int var_20 = 487078794768378694ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
