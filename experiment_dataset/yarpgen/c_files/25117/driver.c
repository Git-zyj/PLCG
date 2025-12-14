#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)23174;
unsigned short var_7 = (unsigned short)64744;
unsigned long long int var_8 = 17603737989111723068ULL;
int var_10 = -1612313949;
int zero = 0;
short var_15 = (short)19325;
unsigned char var_16 = (unsigned char)64;
unsigned int var_17 = 1334532970U;
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
