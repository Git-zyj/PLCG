#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31302;
short var_4 = (short)-24951;
_Bool var_6 = (_Bool)0;
int var_12 = -1932655145;
short var_16 = (short)-22585;
short var_18 = (short)-8465;
int zero = 0;
short var_19 = (short)-28987;
int var_20 = -1456247868;
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
