#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6313931043273905853ULL;
unsigned int var_7 = 513735187U;
short var_8 = (short)20623;
unsigned long long int var_15 = 13731983753302257130ULL;
int zero = 0;
unsigned int var_16 = 3364605538U;
int var_17 = 1336710220;
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
