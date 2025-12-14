#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5721272496510399071LL;
int var_5 = -834822823;
short var_8 = (short)-8151;
unsigned short var_9 = (unsigned short)3664;
signed char var_10 = (signed char)43;
int zero = 0;
long long int var_11 = 3874128073549800743LL;
short var_12 = (short)16321;
unsigned long long int var_13 = 9742591442475450516ULL;
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
