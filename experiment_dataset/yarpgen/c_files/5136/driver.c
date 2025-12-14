#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
unsigned short var_2 = (unsigned short)6067;
unsigned char var_5 = (unsigned char)155;
unsigned int var_8 = 2682775272U;
signed char var_10 = (signed char)23;
unsigned int var_13 = 1202293918U;
int zero = 0;
int var_14 = 12262307;
signed char var_15 = (signed char)2;
unsigned long long int var_16 = 14634442443399042597ULL;
signed char var_17 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
