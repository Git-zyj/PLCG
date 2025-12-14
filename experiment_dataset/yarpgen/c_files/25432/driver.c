#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54620;
short var_1 = (short)-9913;
unsigned short var_2 = (unsigned short)52993;
short var_7 = (short)5809;
long long int var_8 = 6273369429153768740LL;
int zero = 0;
short var_14 = (short)-14390;
unsigned short var_15 = (unsigned short)21402;
short var_16 = (short)-12378;
short var_17 = (short)-30803;
void init() {
}

void checksum() {
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
