#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 7464670878034669561ULL;
unsigned long long int var_9 = 3793406140018875175ULL;
signed char var_11 = (signed char)52;
short var_12 = (short)-25468;
unsigned long long int var_14 = 14522050466422076975ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)44554;
unsigned long long int var_16 = 16574269420381142414ULL;
void init() {
}

void checksum() {
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
