#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2289223026U;
unsigned long long int var_5 = 13555036010018310296ULL;
unsigned char var_8 = (unsigned char)123;
unsigned char var_10 = (unsigned char)22;
int var_11 = -533171874;
unsigned long long int var_12 = 4921626204131455419ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = 1354181094;
unsigned char var_15 = (unsigned char)235;
int var_16 = 506417089;
signed char var_17 = (signed char)56;
long long int var_18 = -6973075744899394547LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
