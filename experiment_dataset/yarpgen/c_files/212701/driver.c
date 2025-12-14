#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)50;
unsigned long long int var_8 = 2400005314956208509ULL;
long long int var_13 = 1703886407482914046LL;
int zero = 0;
signed char var_16 = (signed char)-79;
unsigned char var_17 = (unsigned char)184;
unsigned short var_18 = (unsigned short)38117;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
