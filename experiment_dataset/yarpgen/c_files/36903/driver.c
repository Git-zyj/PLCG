#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1862729435767305534LL;
int var_5 = -2083185673;
long long int var_7 = -2926633234635492362LL;
int zero = 0;
unsigned short var_10 = (unsigned short)63152;
short var_11 = (short)6559;
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
