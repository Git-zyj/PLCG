#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5124612597372124257ULL;
unsigned short var_10 = (unsigned short)11247;
unsigned short var_12 = (unsigned short)29583;
int zero = 0;
unsigned long long int var_14 = 8648318034211600336ULL;
unsigned char var_15 = (unsigned char)57;
unsigned long long int var_16 = 17505108710383937439ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
