#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30104;
int var_5 = -909959066;
unsigned int var_7 = 582124646U;
short var_8 = (short)16518;
short var_11 = (short)-9926;
int zero = 0;
unsigned char var_13 = (unsigned char)171;
unsigned int var_14 = 3609188681U;
long long int var_15 = -5798774328832682398LL;
unsigned long long int var_16 = 6498250595441320136ULL;
int var_17 = 1164098988;
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
