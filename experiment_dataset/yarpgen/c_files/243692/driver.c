#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
short var_1 = (short)-30778;
signed char var_3 = (signed char)42;
int var_6 = -543166743;
signed char var_8 = (signed char)-31;
unsigned long long int var_9 = 6647411919674977227ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4055403158U;
void init() {
}

void checksum() {
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
