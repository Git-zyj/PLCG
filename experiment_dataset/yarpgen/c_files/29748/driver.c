#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8224331982781446904ULL;
long long int var_10 = -2939317119104897234LL;
int zero = 0;
unsigned char var_13 = (unsigned char)25;
unsigned short var_14 = (unsigned short)232;
long long int var_15 = -6322201905172227658LL;
unsigned short var_16 = (unsigned short)39166;
short var_17 = (short)-1513;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
