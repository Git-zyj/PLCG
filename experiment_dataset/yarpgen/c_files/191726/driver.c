#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)48;
long long int var_6 = 2189331704717094648LL;
unsigned long long int var_7 = 17494485781520186786ULL;
int var_11 = 1399739222;
long long int var_12 = 1289740409802890923LL;
int zero = 0;
short var_13 = (short)-26935;
unsigned char var_14 = (unsigned char)45;
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
