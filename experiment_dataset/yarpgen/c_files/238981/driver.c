#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int var_11 = -932885134;
unsigned long long int var_12 = 13633085263303001082ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)33;
int zero = 0;
unsigned long long int var_17 = 7424265859276324538ULL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 3468295679284314481LL;
unsigned long long int var_20 = 17222944505303019991ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
