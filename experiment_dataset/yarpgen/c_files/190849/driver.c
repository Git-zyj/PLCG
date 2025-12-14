#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1335278283576360426LL;
unsigned char var_10 = (unsigned char)252;
short var_11 = (short)-1689;
int var_12 = 313156038;
unsigned short var_15 = (unsigned short)20890;
int zero = 0;
int var_16 = 1567093557;
unsigned long long int var_17 = 13558609423552688197ULL;
void init() {
}

void checksum() {
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
