#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8794930275985541504ULL;
_Bool var_6 = (_Bool)1;
signed char var_10 = (signed char)56;
short var_13 = (short)10524;
long long int var_15 = -4531649533460878350LL;
int zero = 0;
short var_16 = (short)31322;
short var_17 = (short)-27683;
long long int var_18 = 3506756297392844657LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
