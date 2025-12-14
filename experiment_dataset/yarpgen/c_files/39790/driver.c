#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -762354004;
unsigned long long int var_1 = 10275446423620515343ULL;
short var_8 = (short)-9555;
unsigned short var_13 = (unsigned short)64822;
int zero = 0;
short var_16 = (short)7981;
unsigned char var_17 = (unsigned char)152;
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
