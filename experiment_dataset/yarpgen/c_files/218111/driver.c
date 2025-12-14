#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4468046944317878697LL;
int var_2 = 2117809891;
unsigned int var_5 = 1025109263U;
unsigned long long int var_6 = 10985649891272511559ULL;
unsigned int var_7 = 3839157301U;
unsigned long long int var_10 = 2570924624317624954ULL;
int zero = 0;
long long int var_13 = -2939263794378844105LL;
unsigned long long int var_14 = 11248262181204084939ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
