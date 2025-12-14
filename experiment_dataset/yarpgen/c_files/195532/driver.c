#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -985863254;
int var_6 = 808927669;
signed char var_11 = (signed char)122;
short var_14 = (short)17206;
int zero = 0;
unsigned char var_16 = (unsigned char)207;
unsigned long long int var_17 = 904785009392362266ULL;
unsigned int var_18 = 604757084U;
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
