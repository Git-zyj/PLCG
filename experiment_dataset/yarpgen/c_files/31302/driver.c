#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -304392526781781840LL;
unsigned int var_2 = 1892802606U;
signed char var_3 = (signed char)117;
signed char var_4 = (signed char)-19;
long long int var_5 = -6053353915160087090LL;
unsigned long long int var_6 = 4525883458239909730ULL;
int zero = 0;
int var_11 = 2006796691;
signed char var_12 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
