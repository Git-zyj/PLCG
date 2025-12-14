#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = -523384432502440823LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = 8178058075853064865LL;
short var_7 = (short)11295;
signed char var_9 = (signed char)58;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)14827;
_Bool var_14 = (_Bool)1;
long long int var_15 = -3845850844443147075LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
