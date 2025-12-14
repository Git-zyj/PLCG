#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)14164;
_Bool var_5 = (_Bool)1;
short var_12 = (short)-9970;
short var_15 = (short)27288;
int zero = 0;
long long int var_17 = -472148679668844041LL;
short var_18 = (short)-22497;
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
