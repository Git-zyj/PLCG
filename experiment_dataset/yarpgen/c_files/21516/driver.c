#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28032;
short var_1 = (short)-30215;
unsigned int var_2 = 1751385897U;
unsigned char var_9 = (unsigned char)109;
signed char var_10 = (signed char)117;
signed char var_11 = (signed char)-70;
unsigned long long int var_13 = 2942202750871283416ULL;
int zero = 0;
short var_15 = (short)-6359;
signed char var_16 = (signed char)1;
short var_17 = (short)-26843;
void init() {
}

void checksum() {
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
