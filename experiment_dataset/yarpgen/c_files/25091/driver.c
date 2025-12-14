#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4067822575U;
short var_8 = (short)14790;
int var_9 = -295768621;
unsigned long long int var_11 = 6321960386929047764ULL;
unsigned short var_14 = (unsigned short)10651;
int zero = 0;
int var_16 = -1777084948;
unsigned short var_17 = (unsigned short)6202;
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
