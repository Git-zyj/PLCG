#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5187;
int var_3 = 1781576144;
unsigned char var_4 = (unsigned char)27;
unsigned char var_5 = (unsigned char)180;
short var_10 = (short)-22010;
int zero = 0;
signed char var_14 = (signed char)12;
unsigned int var_15 = 913940267U;
signed char var_16 = (signed char)-14;
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
