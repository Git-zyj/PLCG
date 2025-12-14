#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3194100262966953536LL;
unsigned int var_9 = 2916600504U;
unsigned short var_10 = (unsigned short)50268;
int var_11 = -365518928;
unsigned int var_18 = 1896741197U;
int zero = 0;
unsigned long long int var_19 = 17552467898564187856ULL;
long long int var_20 = 1653327965513181050LL;
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
