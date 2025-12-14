#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3879489686U;
signed char var_6 = (signed char)29;
_Bool var_7 = (_Bool)0;
signed char var_15 = (signed char)73;
short var_16 = (short)10943;
unsigned long long int var_17 = 2012851239058000675ULL;
int zero = 0;
long long int var_18 = -2593543039903573853LL;
short var_19 = (short)8940;
unsigned int var_20 = 422638030U;
signed char var_21 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
