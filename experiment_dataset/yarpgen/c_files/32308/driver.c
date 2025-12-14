#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)61;
int var_5 = -1699693198;
_Bool var_10 = (_Bool)1;
long long int var_11 = 6497449972078857915LL;
short var_14 = (short)23836;
int zero = 0;
short var_16 = (short)-26743;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 9602008464945704639ULL;
signed char var_19 = (signed char)-35;
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
