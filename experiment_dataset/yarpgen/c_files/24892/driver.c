#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2034346071U;
long long int var_2 = 2524242888109622279LL;
short var_3 = (short)-15203;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)124;
signed char var_10 = (signed char)-56;
int zero = 0;
signed char var_13 = (signed char)38;
signed char var_14 = (signed char)1;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
