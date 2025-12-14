#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned long long int var_4 = 17629764814311755082ULL;
unsigned char var_6 = (unsigned char)218;
signed char var_11 = (signed char)-15;
unsigned char var_12 = (unsigned char)244;
int var_14 = -937763757;
int zero = 0;
long long int var_17 = 3554039668648317340LL;
short var_18 = (short)-22584;
void init() {
}

void checksum() {
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
