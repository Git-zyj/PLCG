#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40486;
unsigned short var_4 = (unsigned short)13163;
unsigned int var_6 = 4003982059U;
unsigned short var_7 = (unsigned short)3236;
int var_8 = 1030212007;
unsigned char var_9 = (unsigned char)52;
int zero = 0;
unsigned int var_16 = 780280127U;
long long int var_17 = -95145616630923545LL;
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
