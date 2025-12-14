#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7524;
unsigned long long int var_9 = 6701446470486885284ULL;
int var_10 = -215745896;
int zero = 0;
unsigned short var_15 = (unsigned short)45063;
unsigned short var_16 = (unsigned short)57320;
void init() {
}

void checksum() {
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
