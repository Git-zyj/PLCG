#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1657230529;
unsigned short var_4 = (unsigned short)1520;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-30181;
signed char var_7 = (signed char)24;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 1264594853;
int var_12 = 1005389915;
int var_13 = -1600443475;
signed char var_14 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
