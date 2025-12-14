#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1152360194160858539ULL;
int var_9 = -964418748;
unsigned char var_13 = (unsigned char)136;
long long int var_14 = -1555465530814153445LL;
short var_15 = (short)10875;
int zero = 0;
int var_20 = 523054913;
unsigned char var_21 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
