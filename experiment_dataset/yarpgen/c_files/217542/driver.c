#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2575437274104431394LL;
unsigned short var_12 = (unsigned short)3743;
unsigned short var_15 = (unsigned short)43860;
int zero = 0;
unsigned int var_16 = 3259033452U;
short var_17 = (short)16263;
unsigned int var_18 = 3415971922U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
