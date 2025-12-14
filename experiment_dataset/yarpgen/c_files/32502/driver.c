#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_12 = (_Bool)1;
signed char var_15 = (signed char)85;
unsigned char var_16 = (unsigned char)4;
int zero = 0;
long long int var_18 = -7839671683501165367LL;
signed char var_19 = (signed char)-17;
signed char var_20 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
