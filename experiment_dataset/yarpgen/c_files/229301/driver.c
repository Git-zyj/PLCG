#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)147;
unsigned int var_2 = 3819934084U;
long long int var_4 = -8027328184589736888LL;
signed char var_5 = (signed char)-114;
_Bool var_7 = (_Bool)1;
int var_8 = 1564544534;
long long int var_9 = 4655279586553378321LL;
unsigned long long int var_10 = 15134605067683367077ULL;
short var_11 = (short)-8965;
unsigned char var_13 = (unsigned char)33;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -1579125291;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
