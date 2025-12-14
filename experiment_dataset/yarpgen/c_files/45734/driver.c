#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3513055823964692933LL;
unsigned int var_4 = 3035813034U;
int var_5 = 125449323;
unsigned char var_9 = (unsigned char)236;
short var_12 = (short)-15317;
int zero = 0;
unsigned int var_14 = 2449809340U;
short var_15 = (short)-27094;
unsigned int var_16 = 2335767388U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
