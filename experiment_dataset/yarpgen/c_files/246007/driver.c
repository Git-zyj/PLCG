#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 52049724;
unsigned short var_5 = (unsigned short)4000;
short var_8 = (short)-30934;
unsigned int var_12 = 1080007300U;
signed char var_16 = (signed char)-1;
int zero = 0;
int var_17 = -1690537503;
short var_18 = (short)-21397;
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
