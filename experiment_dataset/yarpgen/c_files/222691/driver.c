#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22456;
int var_9 = -732661309;
short var_10 = (short)25477;
short var_14 = (short)-2213;
unsigned long long int var_16 = 13738207900709635432ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)45551;
unsigned long long int var_21 = 8039526296774464352ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
