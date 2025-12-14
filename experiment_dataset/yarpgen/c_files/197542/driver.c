#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3654268969667086616ULL;
long long int var_7 = -7915831083660643287LL;
unsigned char var_10 = (unsigned char)84;
signed char var_11 = (signed char)-34;
int zero = 0;
short var_14 = (short)29914;
unsigned long long int var_15 = 8979893326258225606ULL;
unsigned char var_16 = (unsigned char)215;
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
