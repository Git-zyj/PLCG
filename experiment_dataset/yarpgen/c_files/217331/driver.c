#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)83;
short var_10 = (short)29324;
long long int var_11 = 8985080388484041367LL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3326716590U;
int zero = 0;
int var_17 = 46580132;
unsigned short var_18 = (unsigned short)25812;
short var_19 = (short)10951;
unsigned long long int var_20 = 316097051394410897ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
