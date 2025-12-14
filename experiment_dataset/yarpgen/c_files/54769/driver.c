#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2853344257776321562LL;
unsigned short var_6 = (unsigned short)4308;
unsigned long long int var_9 = 402919078153201556ULL;
int var_12 = 278435018;
int zero = 0;
unsigned char var_14 = (unsigned char)247;
short var_15 = (short)10934;
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
