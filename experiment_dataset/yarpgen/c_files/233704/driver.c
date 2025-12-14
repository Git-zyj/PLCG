#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1604166211704941371ULL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)111;
int var_11 = 787498345;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)13447;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
