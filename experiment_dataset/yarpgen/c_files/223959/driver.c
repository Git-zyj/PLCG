#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)15720;
unsigned char var_9 = (unsigned char)171;
unsigned char var_14 = (unsigned char)116;
long long int var_15 = 5295284359432452540LL;
unsigned int var_16 = 2783632660U;
int zero = 0;
signed char var_18 = (signed char)103;
short var_19 = (short)-16979;
unsigned int var_20 = 2906640859U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
