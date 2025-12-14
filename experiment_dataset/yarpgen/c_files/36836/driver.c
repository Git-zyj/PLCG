#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46990;
long long int var_4 = 1517378589748469508LL;
unsigned short var_6 = (unsigned short)38784;
long long int var_8 = -4560297052871988253LL;
unsigned char var_9 = (unsigned char)236;
unsigned char var_16 = (unsigned char)252;
int zero = 0;
unsigned short var_17 = (unsigned short)54950;
unsigned long long int var_18 = 654204454505636889ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
