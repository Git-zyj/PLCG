#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1556648771;
long long int var_2 = 437101583553953222LL;
signed char var_5 = (signed char)27;
int zero = 0;
unsigned char var_11 = (unsigned char)144;
unsigned short var_12 = (unsigned short)55292;
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
