#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1286703985;
unsigned short var_5 = (unsigned short)41066;
long long int var_11 = 2603126144948418639LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 7765986279523508911LL;
int var_16 = -20297280;
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
