#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25148;
_Bool var_5 = (_Bool)0;
unsigned short var_11 = (unsigned short)14513;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_14 = (short)15282;
signed char var_15 = (signed char)117;
unsigned short var_16 = (unsigned short)56997;
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
