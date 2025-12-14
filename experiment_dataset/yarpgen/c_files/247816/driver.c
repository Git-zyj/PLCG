#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15612;
signed char var_3 = (signed char)113;
unsigned short var_4 = (unsigned short)47722;
unsigned short var_6 = (unsigned short)45745;
short var_7 = (short)-7551;
unsigned short var_9 = (unsigned short)37715;
int zero = 0;
unsigned short var_10 = (unsigned short)44989;
long long int var_11 = 835960170081613175LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
