#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17105250489221908701ULL;
short var_5 = (short)-30846;
unsigned char var_7 = (unsigned char)241;
unsigned long long int var_10 = 5879155948573853005ULL;
short var_11 = (short)-6187;
short var_12 = (short)-20426;
short var_14 = (short)-30337;
unsigned char var_15 = (unsigned char)62;
int zero = 0;
int var_16 = -1883994705;
short var_17 = (short)13029;
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
