#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)185;
int var_10 = 1548040521;
unsigned char var_13 = (unsigned char)243;
unsigned long long int var_16 = 11986969475799030075ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)223;
unsigned short var_18 = (unsigned short)25548;
short var_19 = (short)-13809;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
