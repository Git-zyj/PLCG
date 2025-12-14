#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15871082178906889225ULL;
unsigned int var_2 = 3421907088U;
long long int var_5 = -3308329380915870192LL;
signed char var_6 = (signed char)14;
short var_16 = (short)-24249;
int zero = 0;
signed char var_19 = (signed char)10;
short var_20 = (short)-27446;
void init() {
}

void checksum() {
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
