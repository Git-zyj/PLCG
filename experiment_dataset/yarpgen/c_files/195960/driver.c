#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
long long int var_10 = 3183155576344107309LL;
long long int var_13 = -2223941811426020167LL;
short var_14 = (short)976;
int zero = 0;
unsigned char var_20 = (unsigned char)189;
short var_21 = (short)-11110;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
