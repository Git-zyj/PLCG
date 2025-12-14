#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1429772334;
_Bool var_2 = (_Bool)0;
int var_3 = -1855279224;
unsigned long long int var_4 = 7178274681067437800ULL;
long long int var_7 = -6927988468818884561LL;
int var_8 = 967792211;
int zero = 0;
signed char var_10 = (signed char)30;
unsigned int var_11 = 3509105306U;
int var_12 = -478066317;
unsigned char var_13 = (unsigned char)203;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
