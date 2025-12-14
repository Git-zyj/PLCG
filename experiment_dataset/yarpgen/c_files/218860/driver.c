#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1641995610116318402LL;
int var_4 = -2033933328;
unsigned short var_8 = (unsigned short)43796;
unsigned long long int var_14 = 78448279925348899ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)62178;
unsigned short var_17 = (unsigned short)37261;
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
