#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)31226;
unsigned long long int var_7 = 17098527365941097908ULL;
long long int var_8 = -8211073342082270969LL;
int zero = 0;
unsigned long long int var_10 = 5417506735837709080ULL;
signed char var_11 = (signed char)-61;
unsigned long long int var_12 = 5074917319778957352ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
