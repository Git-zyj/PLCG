#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-84;
_Bool var_5 = (_Bool)0;
unsigned short var_11 = (unsigned short)35175;
long long int var_14 = -8692366730615474214LL;
int zero = 0;
signed char var_17 = (signed char)4;
unsigned long long int var_18 = 3214260086950386657ULL;
void init() {
}

void checksum() {
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
