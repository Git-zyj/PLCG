#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1617066419;
long long int var_4 = 5193346498015235380LL;
unsigned char var_5 = (unsigned char)45;
unsigned int var_11 = 1784594895U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 13739078594989525615ULL;
unsigned int var_16 = 255575314U;
unsigned char var_17 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
