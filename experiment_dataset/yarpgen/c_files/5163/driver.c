#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23998;
int var_6 = 76266029;
unsigned long long int var_10 = 17252341106726498723ULL;
int zero = 0;
unsigned long long int var_14 = 10387822431069909711ULL;
unsigned short var_15 = (unsigned short)43901;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
