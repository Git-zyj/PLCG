#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -6582723465382826452LL;
_Bool var_14 = (_Bool)1;
short var_18 = (short)12222;
signed char var_19 = (signed char)-39;
int zero = 0;
long long int var_20 = 857091180862040526LL;
int var_21 = -1043873996;
short var_22 = (short)-14283;
void init() {
}

void checksum() {
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
