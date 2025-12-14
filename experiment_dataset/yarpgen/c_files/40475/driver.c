#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16595069674986072668ULL;
unsigned long long int var_2 = 16226079633656506270ULL;
unsigned char var_4 = (unsigned char)246;
unsigned int var_5 = 1275051841U;
unsigned int var_9 = 2040368330U;
int zero = 0;
long long int var_10 = 5859286787061100421LL;
short var_11 = (short)-20472;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
