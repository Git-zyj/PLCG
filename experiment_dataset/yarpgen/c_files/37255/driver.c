#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)111;
unsigned long long int var_10 = 6137678933285999714ULL;
signed char var_13 = (signed char)2;
unsigned short var_14 = (unsigned short)22937;
int zero = 0;
short var_18 = (short)-14740;
unsigned long long int var_19 = 9325887061935136176ULL;
unsigned short var_20 = (unsigned short)61406;
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
