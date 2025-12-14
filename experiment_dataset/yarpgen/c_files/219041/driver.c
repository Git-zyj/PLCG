#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24123;
unsigned int var_2 = 61589154U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)51239;
long long int var_9 = -6158783544347661145LL;
unsigned long long int var_13 = 6411353214571641831ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)7923;
_Bool var_21 = (_Bool)0;
short var_22 = (short)4038;
void init() {
}

void checksum() {
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
