#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1440637369;
unsigned int var_5 = 3097789727U;
signed char var_6 = (signed char)35;
unsigned long long int var_7 = 15536427651996878862ULL;
signed char var_8 = (signed char)9;
short var_10 = (short)28703;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = -5911551432224180774LL;
short var_13 = (short)-1390;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
