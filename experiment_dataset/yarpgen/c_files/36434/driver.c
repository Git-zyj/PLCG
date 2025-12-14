#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 239292368U;
short var_12 = (short)-1580;
short var_13 = (short)-32253;
unsigned long long int var_16 = 6169453631752240362ULL;
int zero = 0;
int var_18 = -120068924;
unsigned long long int var_19 = 13736100459630425659ULL;
void init() {
}

void checksum() {
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
