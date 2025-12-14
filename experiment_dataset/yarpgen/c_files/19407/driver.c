#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3764831491207760136LL;
int var_6 = -2027286785;
int var_15 = -1911148565;
short var_18 = (short)20864;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)29621;
void init() {
}

void checksum() {
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
