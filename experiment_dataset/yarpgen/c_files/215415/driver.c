#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7520213042399120226LL;
unsigned long long int var_6 = 465340216821554383ULL;
int var_7 = -18330566;
int zero = 0;
unsigned long long int var_12 = 934909850282701840ULL;
signed char var_13 = (signed char)84;
unsigned long long int var_14 = 4342153667338217546ULL;
short var_15 = (short)11620;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
