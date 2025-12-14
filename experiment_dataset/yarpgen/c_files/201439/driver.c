#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 500654358U;
_Bool var_1 = (_Bool)1;
short var_3 = (short)-16919;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 12350954390333540293ULL;
long long int var_7 = -1231603428695025378LL;
unsigned long long int var_8 = 2657825646001957370ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 1726161365U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)53;
long long int var_14 = -3072430638678899375LL;
unsigned int var_15 = 3278556885U;
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
