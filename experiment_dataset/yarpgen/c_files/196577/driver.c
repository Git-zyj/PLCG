#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8647;
int var_7 = 1595153444;
unsigned char var_8 = (unsigned char)25;
unsigned char var_9 = (unsigned char)212;
int zero = 0;
unsigned char var_15 = (unsigned char)238;
short var_16 = (short)1380;
short var_17 = (short)22449;
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
