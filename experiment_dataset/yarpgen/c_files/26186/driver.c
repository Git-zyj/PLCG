#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54815;
unsigned int var_10 = 4034716672U;
short var_13 = (short)-8276;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 3103839394475537002ULL;
short var_21 = (short)-29986;
unsigned short var_22 = (unsigned short)3530;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
