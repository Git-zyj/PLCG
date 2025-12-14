#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)-27912;
unsigned long long int var_4 = 4654050112946935401ULL;
int var_5 = -2057771860;
int var_6 = 1364854992;
short var_7 = (short)6056;
signed char var_9 = (signed char)9;
signed char var_12 = (signed char)-99;
int zero = 0;
int var_14 = -738230659;
signed char var_15 = (signed char)-88;
unsigned char var_16 = (unsigned char)186;
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
