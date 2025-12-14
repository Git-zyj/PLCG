#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-123;
short var_3 = (short)1328;
long long int var_8 = -3777650796629745077LL;
unsigned int var_13 = 1653789757U;
signed char var_15 = (signed char)35;
short var_16 = (short)-20144;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 1727792290371102320ULL;
unsigned long long int var_19 = 4701179691492762046ULL;
unsigned char var_20 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
