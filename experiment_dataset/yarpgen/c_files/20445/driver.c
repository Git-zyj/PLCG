#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64387;
unsigned int var_9 = 3708973628U;
unsigned short var_13 = (unsigned short)42322;
int zero = 0;
signed char var_16 = (signed char)-92;
unsigned long long int var_17 = 395109570791514757ULL;
short var_18 = (short)-27823;
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
