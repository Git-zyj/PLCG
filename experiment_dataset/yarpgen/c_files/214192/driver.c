#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3364390212243622319ULL;
unsigned short var_3 = (unsigned short)29139;
short var_7 = (short)31426;
int zero = 0;
unsigned short var_11 = (unsigned short)14940;
signed char var_12 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
