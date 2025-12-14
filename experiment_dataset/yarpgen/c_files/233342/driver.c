#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1742482592;
short var_4 = (short)-5264;
unsigned long long int var_7 = 14681883778542078944ULL;
unsigned int var_8 = 1632175440U;
unsigned long long int var_12 = 2591720672701879607ULL;
int zero = 0;
long long int var_13 = -2811698123622061455LL;
int var_14 = 896774200;
void init() {
}

void checksum() {
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
