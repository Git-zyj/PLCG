#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12362;
unsigned long long int var_3 = 16384667538210579235ULL;
unsigned char var_6 = (unsigned char)91;
long long int var_9 = -2455430868402815559LL;
int zero = 0;
unsigned int var_11 = 3109876501U;
unsigned long long int var_12 = 3509776277427056687ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
