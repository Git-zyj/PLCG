#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-10196;
unsigned long long int var_8 = 16744576584496044071ULL;
unsigned short var_10 = (unsigned short)11427;
unsigned short var_13 = (unsigned short)11363;
int zero = 0;
long long int var_20 = 6231664557071174792LL;
unsigned short var_21 = (unsigned short)18714;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
