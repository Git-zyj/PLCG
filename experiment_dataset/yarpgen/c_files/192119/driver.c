#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3918423935U;
long long int var_14 = 7309452630641754984LL;
short var_16 = (short)8129;
unsigned int var_17 = 2188891258U;
int zero = 0;
signed char var_18 = (signed char)29;
_Bool var_19 = (_Bool)1;
int var_20 = -689644213;
void init() {
}

void checksum() {
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
