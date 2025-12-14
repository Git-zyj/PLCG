#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
signed char var_1 = (signed char)54;
_Bool var_2 = (_Bool)1;
unsigned char var_8 = (unsigned char)146;
int zero = 0;
long long int var_12 = -888745167555728378LL;
unsigned int var_13 = 3771193501U;
unsigned short var_14 = (unsigned short)3066;
signed char var_15 = (signed char)-121;
unsigned long long int var_16 = 6738282218927838030ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
