#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)174;
signed char var_5 = (signed char)-94;
unsigned char var_6 = (unsigned char)83;
unsigned long long int var_13 = 9021950842106153162ULL;
int zero = 0;
long long int var_14 = -1373127043382823960LL;
short var_15 = (short)25758;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
