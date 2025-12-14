#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5893367004213698339ULL;
long long int var_6 = -2133488484386960275LL;
_Bool var_8 = (_Bool)0;
unsigned char var_16 = (unsigned char)195;
int zero = 0;
unsigned short var_17 = (unsigned short)38014;
unsigned int var_18 = 256054672U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
