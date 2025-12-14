#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9462;
unsigned long long int var_3 = 17091111304247915579ULL;
int var_10 = -522195095;
int zero = 0;
unsigned long long int var_16 = 408989048944816866ULL;
unsigned short var_17 = (unsigned short)35760;
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
