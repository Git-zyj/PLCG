#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4011216878U;
unsigned short var_5 = (unsigned short)22128;
unsigned int var_6 = 714256660U;
unsigned short var_10 = (unsigned short)37956;
long long int var_12 = -542490753373880512LL;
long long int var_13 = 7173862759931306776LL;
unsigned short var_18 = (unsigned short)53063;
int zero = 0;
signed char var_20 = (signed char)-105;
long long int var_21 = -7709088564601804983LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
