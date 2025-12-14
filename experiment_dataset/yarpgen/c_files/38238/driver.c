#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -9042826126469011513LL;
short var_10 = (short)-9060;
long long int var_11 = 3591659102034499494LL;
int var_15 = -67117985;
int zero = 0;
unsigned char var_17 = (unsigned char)29;
long long int var_18 = 8023929185903632173LL;
short var_19 = (short)-32307;
unsigned char var_20 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
