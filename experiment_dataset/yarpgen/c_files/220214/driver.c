#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -99019578441539117LL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)14;
short var_12 = (short)-30208;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)45389;
signed char var_15 = (signed char)69;
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
