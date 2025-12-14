#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1291697677;
unsigned short var_5 = (unsigned short)59047;
long long int var_11 = 3043356928800587358LL;
unsigned char var_13 = (unsigned char)99;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 11860791484821504572ULL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1432931803U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
