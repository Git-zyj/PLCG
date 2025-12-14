#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12008943858878475210ULL;
int var_2 = 1723618365;
signed char var_3 = (signed char)-44;
short var_4 = (short)-7940;
short var_9 = (short)1523;
unsigned short var_10 = (unsigned short)46493;
unsigned char var_11 = (unsigned char)35;
int zero = 0;
int var_12 = 1400127607;
int var_13 = -427020986;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
