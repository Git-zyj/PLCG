#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32117;
signed char var_1 = (signed char)-16;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 14882819155490776289ULL;
_Bool var_6 = (_Bool)0;
long long int var_8 = 4970412433223178102LL;
int zero = 0;
long long int var_13 = 5486010764050463846LL;
unsigned char var_14 = (unsigned char)96;
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
