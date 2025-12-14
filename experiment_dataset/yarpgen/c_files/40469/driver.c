#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)39763;
signed char var_12 = (signed char)-88;
long long int var_13 = -9191062618668886395LL;
unsigned char var_16 = (unsigned char)137;
signed char var_17 = (signed char)93;
unsigned int var_18 = 1674265599U;
int zero = 0;
signed char var_19 = (signed char)-16;
unsigned int var_20 = 1319583449U;
void init() {
}

void checksum() {
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
