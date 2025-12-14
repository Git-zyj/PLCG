#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3944801914723823453LL;
unsigned long long int var_2 = 12178545773450749911ULL;
unsigned short var_3 = (unsigned short)40802;
int var_6 = 1597963988;
int zero = 0;
unsigned int var_10 = 1092057294U;
signed char var_11 = (signed char)33;
long long int var_12 = -2414561908071278977LL;
long long int var_13 = -7113261809164240508LL;
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
