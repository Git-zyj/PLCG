#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)121;
int var_2 = 739714280;
long long int var_4 = 6907852388686305265LL;
unsigned int var_5 = 483497336U;
long long int var_12 = -8051207567985619864LL;
int zero = 0;
signed char var_15 = (signed char)76;
signed char var_16 = (signed char)86;
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
