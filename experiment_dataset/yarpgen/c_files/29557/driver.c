#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3674;
unsigned long long int var_1 = 14945072553497866591ULL;
unsigned char var_5 = (unsigned char)236;
int var_7 = 1794315401;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2008397588U;
int var_12 = 1485096978;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
