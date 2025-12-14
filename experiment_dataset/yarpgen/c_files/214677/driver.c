#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1988623073;
signed char var_4 = (signed char)-84;
short var_7 = (short)29077;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)68;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-43;
_Bool var_16 = (_Bool)1;
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
