#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1734808749849762394LL;
int var_3 = -435371475;
unsigned short var_4 = (unsigned short)2471;
int var_5 = 783872554;
unsigned int var_9 = 2793972853U;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-7611;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
