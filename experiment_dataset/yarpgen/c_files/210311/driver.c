#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32280;
unsigned short var_5 = (unsigned short)25585;
unsigned char var_7 = (unsigned char)218;
int zero = 0;
unsigned long long int var_14 = 9072614246544445598ULL;
short var_15 = (short)17623;
unsigned int var_16 = 2761756906U;
unsigned long long int var_17 = 14539778316453156006ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
