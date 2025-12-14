#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 69852326U;
unsigned int var_1 = 1328552774U;
unsigned char var_2 = (unsigned char)240;
unsigned short var_3 = (unsigned short)55062;
unsigned char var_4 = (unsigned char)163;
unsigned int var_7 = 159854517U;
unsigned int var_8 = 2321947465U;
unsigned int var_9 = 1087824568U;
unsigned int var_10 = 3292611874U;
unsigned char var_12 = (unsigned char)32;
int zero = 0;
long long int var_13 = -480982947886226800LL;
unsigned short var_14 = (unsigned short)14945;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3608212616U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
