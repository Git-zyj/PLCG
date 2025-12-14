#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10877277291502232003ULL;
short var_5 = (short)12475;
unsigned long long int var_6 = 9790414346310644803ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)14;
unsigned char var_12 = (unsigned char)74;
short var_13 = (short)-9863;
short var_14 = (short)-12445;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
