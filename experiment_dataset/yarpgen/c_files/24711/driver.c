#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -223924159975209254LL;
_Bool var_5 = (_Bool)0;
unsigned int var_10 = 2712119952U;
int zero = 0;
short var_12 = (short)-2052;
long long int var_13 = 7094321717894819111LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
