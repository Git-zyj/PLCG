#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)109;
unsigned long long int var_6 = 9073046242008841779ULL;
int var_8 = 425553079;
long long int var_11 = -8162481951912450864LL;
unsigned int var_13 = 1905943944U;
int zero = 0;
unsigned char var_16 = (unsigned char)65;
unsigned char var_17 = (unsigned char)173;
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
