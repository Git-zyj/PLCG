#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46482;
unsigned long long int var_2 = 7745266506602927252ULL;
long long int var_3 = 2401535002861140695LL;
int var_6 = 1019284438;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-6810;
int zero = 0;
short var_11 = (short)12153;
unsigned short var_12 = (unsigned short)19545;
long long int var_13 = 1692053662608902205LL;
void init() {
}

void checksum() {
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
