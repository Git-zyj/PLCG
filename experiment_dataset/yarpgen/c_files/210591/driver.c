#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16929749160220966436ULL;
int var_4 = -94528155;
unsigned int var_6 = 2831446981U;
short var_15 = (short)26065;
int zero = 0;
unsigned int var_16 = 744785988U;
long long int var_17 = -7356248505109021186LL;
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
