#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12984133720329646054ULL;
long long int var_5 = -3887724002688367904LL;
long long int var_12 = 1474570283916529940LL;
int zero = 0;
unsigned long long int var_19 = 13934141449864642045ULL;
signed char var_20 = (signed char)-96;
unsigned char var_21 = (unsigned char)107;
unsigned char var_22 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
