#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -945769928;
int var_3 = -1655872828;
signed char var_5 = (signed char)70;
unsigned long long int var_10 = 5522265846745113409ULL;
short var_15 = (short)11730;
int zero = 0;
signed char var_18 = (signed char)-112;
unsigned char var_19 = (unsigned char)225;
int var_20 = 79146979;
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
