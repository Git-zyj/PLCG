#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1348574209711315926LL;
signed char var_1 = (signed char)-91;
unsigned char var_7 = (unsigned char)97;
unsigned long long int var_8 = 1296084611991738211ULL;
int zero = 0;
unsigned long long int var_11 = 5893353782804332449ULL;
short var_12 = (short)-7798;
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
