#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13428899705543648834ULL;
signed char var_9 = (signed char)119;
long long int var_11 = -4258744327579882215LL;
unsigned char var_13 = (unsigned char)237;
int zero = 0;
short var_15 = (short)-8657;
unsigned long long int var_16 = 5779349630846286458ULL;
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
