#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)2;
short var_8 = (short)25183;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int var_13 = -1052887415;
int zero = 0;
signed char var_14 = (signed char)54;
_Bool var_15 = (_Bool)0;
long long int var_16 = -8712121183219525018LL;
void init() {
}

void checksum() {
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
