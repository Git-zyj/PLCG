#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
_Bool var_2 = (_Bool)1;
long long int var_3 = -5980506921917707475LL;
unsigned int var_6 = 2091890921U;
signed char var_7 = (signed char)-102;
signed char var_8 = (signed char)1;
int var_10 = 767360312;
int var_14 = 1295961995;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-8;
signed char var_21 = (signed char)100;
short var_22 = (short)-8952;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
