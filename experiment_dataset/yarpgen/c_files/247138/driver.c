#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31925;
unsigned long long int var_3 = 2433547024325427760ULL;
int var_4 = -1666484358;
signed char var_6 = (signed char)51;
long long int var_8 = 4369510773009485592LL;
int var_11 = -1923049023;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5562170358633519758LL;
short var_16 = (short)-24820;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
