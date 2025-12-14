#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)75;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)33;
short var_16 = (short)-28855;
signed char var_17 = (signed char)-46;
long long int var_18 = 7022881326450331475LL;
int zero = 0;
signed char var_20 = (signed char)118;
long long int var_21 = 4693121029015274231LL;
unsigned int var_22 = 1393887930U;
short var_23 = (short)29176;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
