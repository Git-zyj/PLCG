#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2227358473U;
signed char var_6 = (signed char)10;
unsigned int var_9 = 1794949299U;
int zero = 0;
long long int var_10 = 1168398367216354243LL;
unsigned short var_11 = (unsigned short)37206;
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
