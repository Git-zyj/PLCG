#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1628190077;
_Bool var_7 = (_Bool)0;
int var_8 = -1930292303;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
short var_14 = (short)4126;
int zero = 0;
unsigned int var_20 = 1324512035U;
short var_21 = (short)12914;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
