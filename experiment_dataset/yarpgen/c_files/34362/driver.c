#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2050711304;
unsigned char var_1 = (unsigned char)65;
long long int var_3 = -876413097132793502LL;
unsigned int var_5 = 3144071408U;
signed char var_6 = (signed char)33;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-118;
int zero = 0;
unsigned short var_12 = (unsigned short)24294;
short var_13 = (short)29796;
unsigned long long int var_14 = 5269831357262437971ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
