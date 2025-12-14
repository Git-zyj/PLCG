#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3669814904602832993LL;
unsigned int var_5 = 1068014428U;
long long int var_8 = -7418091676831292820LL;
short var_9 = (short)9232;
int zero = 0;
long long int var_13 = -8616218092989804639LL;
unsigned short var_14 = (unsigned short)45856;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
