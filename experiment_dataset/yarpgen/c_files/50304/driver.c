#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-267;
unsigned long long int var_6 = 10528281843245451077ULL;
unsigned long long int var_10 = 16838897667083362252ULL;
unsigned short var_17 = (unsigned short)3386;
int zero = 0;
long long int var_20 = -8193929190525196298LL;
unsigned int var_21 = 322937936U;
short var_22 = (short)-19189;
unsigned long long int var_23 = 14344046349069217488ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
