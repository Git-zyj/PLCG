#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)20909;
unsigned short var_3 = (unsigned short)16025;
long long int var_5 = -2734605718549864066LL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_11 = (short)6624;
unsigned short var_12 = (unsigned short)32226;
signed char var_13 = (signed char)74;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
