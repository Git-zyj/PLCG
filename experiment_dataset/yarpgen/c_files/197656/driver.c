#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)100;
_Bool var_3 = (_Bool)1;
signed char var_10 = (signed char)81;
int var_11 = -1009358656;
unsigned long long int var_14 = 1629213530202182214ULL;
int zero = 0;
unsigned int var_19 = 1962127865U;
_Bool var_20 = (_Bool)0;
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
