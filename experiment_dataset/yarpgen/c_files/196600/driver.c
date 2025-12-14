#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
unsigned short var_6 = (unsigned short)2034;
signed char var_10 = (signed char)30;
unsigned short var_14 = (unsigned short)62527;
int zero = 0;
signed char var_19 = (signed char)-70;
unsigned short var_20 = (unsigned short)18966;
unsigned long long int var_21 = 5583536721555618436ULL;
unsigned short var_22 = (unsigned short)42884;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
