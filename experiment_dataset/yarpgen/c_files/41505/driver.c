#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2300849697U;
_Bool var_8 = (_Bool)0;
long long int var_9 = 3286157160230611634LL;
int zero = 0;
unsigned char var_10 = (unsigned char)250;
unsigned long long int var_11 = 2808017305655380404ULL;
unsigned long long int var_12 = 15696063505729255841ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
