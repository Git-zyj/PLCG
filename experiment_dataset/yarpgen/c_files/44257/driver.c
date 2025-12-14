#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-20062;
short var_9 = (short)23133;
long long int var_12 = -3320953833174002053LL;
unsigned short var_13 = (unsigned short)16632;
int zero = 0;
unsigned char var_14 = (unsigned char)67;
unsigned char var_15 = (unsigned char)240;
unsigned long long int var_16 = 17362454137515629290ULL;
int var_17 = 373057212;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
