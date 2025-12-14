#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)6;
long long int var_4 = 197912069763562311LL;
int var_8 = 625843029;
int zero = 0;
unsigned long long int var_10 = 5104920424853750191ULL;
unsigned char var_11 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
