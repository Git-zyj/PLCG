#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 206625193700976428ULL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)6825;
unsigned char var_8 = (unsigned char)119;
int zero = 0;
int var_14 = -1123207596;
long long int var_15 = -7125695731093276483LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
