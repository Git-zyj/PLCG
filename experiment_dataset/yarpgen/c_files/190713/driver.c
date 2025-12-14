#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3323015884U;
_Bool var_3 = (_Bool)1;
int var_5 = -732893503;
long long int var_6 = -386058943709236572LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_20 = 294206840;
signed char var_21 = (signed char)55;
void init() {
}

void checksum() {
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
