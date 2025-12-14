#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-66;
_Bool var_8 = (_Bool)0;
short var_11 = (short)9148;
long long int var_14 = -7257650261497631353LL;
int zero = 0;
unsigned long long int var_16 = 8327043795568558426ULL;
long long int var_17 = -5074052687949324203LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
