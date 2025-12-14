#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26178;
unsigned int var_1 = 2412298296U;
unsigned char var_11 = (unsigned char)120;
unsigned short var_13 = (unsigned short)18690;
unsigned long long int var_14 = 1168089646450049498ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)140;
int var_16 = 1688266434;
unsigned long long int var_17 = 2777680114912762429ULL;
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
