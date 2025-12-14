#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -560373980;
_Bool var_2 = (_Bool)1;
unsigned long long int var_10 = 16952004903512572804ULL;
int zero = 0;
unsigned long long int var_11 = 10211283876006158506ULL;
signed char var_12 = (signed char)-104;
unsigned char var_13 = (unsigned char)110;
_Bool var_14 = (_Bool)0;
long long int var_15 = -5609161868408503629LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
