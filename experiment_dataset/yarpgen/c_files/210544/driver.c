#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
_Bool var_1 = (_Bool)0;
long long int var_2 = 2112814022750224940LL;
short var_5 = (short)25731;
_Bool var_6 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)108;
_Bool var_16 = (_Bool)0;
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
