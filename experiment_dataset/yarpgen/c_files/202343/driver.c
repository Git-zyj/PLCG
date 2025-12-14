#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-34;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 7726500046431700375ULL;
signed char var_14 = (signed char)31;
unsigned long long int var_15 = 10840266767839133911ULL;
short var_16 = (short)8530;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
