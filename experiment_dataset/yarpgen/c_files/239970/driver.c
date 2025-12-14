#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8686113659943028434LL;
long long int var_1 = -1448719441558661731LL;
signed char var_6 = (signed char)42;
int var_7 = 1467717569;
unsigned int var_8 = 2305217579U;
unsigned short var_9 = (unsigned short)46539;
unsigned int var_11 = 3684637751U;
unsigned short var_13 = (unsigned short)47590;
int zero = 0;
short var_14 = (short)-6248;
unsigned int var_15 = 2383318114U;
unsigned short var_16 = (unsigned short)22783;
int var_17 = 56857362;
unsigned short var_18 = (unsigned short)61668;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
