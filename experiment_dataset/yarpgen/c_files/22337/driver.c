#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18685;
unsigned char var_6 = (unsigned char)73;
long long int var_8 = -7629674293430997100LL;
int zero = 0;
long long int var_10 = -9166929912552364774LL;
unsigned int var_11 = 1946121496U;
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
