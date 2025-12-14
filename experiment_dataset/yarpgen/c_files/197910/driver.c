#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-40;
long long int var_2 = -1881691346918488164LL;
int var_4 = 769106271;
unsigned char var_8 = (unsigned char)113;
_Bool var_9 = (_Bool)0;
unsigned short var_14 = (unsigned short)64107;
unsigned int var_15 = 3886831177U;
int zero = 0;
unsigned char var_16 = (unsigned char)61;
unsigned short var_17 = (unsigned short)24299;
void init() {
}

void checksum() {
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
