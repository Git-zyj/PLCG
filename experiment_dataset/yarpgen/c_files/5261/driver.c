#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 836521297;
unsigned short var_1 = (unsigned short)39083;
unsigned int var_5 = 2261511193U;
unsigned long long int var_7 = 5212483093359031699ULL;
unsigned long long int var_10 = 9284938555793876886ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)53242;
unsigned int var_12 = 551037686U;
short var_13 = (short)9268;
signed char var_14 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
