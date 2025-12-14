#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
int var_3 = -524510545;
unsigned long long int var_5 = 14931882640699488062ULL;
short var_8 = (short)-21774;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 792788126;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
