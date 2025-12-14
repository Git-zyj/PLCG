#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_5 = (short)29474;
int var_6 = -634325027;
unsigned char var_8 = (unsigned char)178;
unsigned long long int var_9 = 2249892871856541819ULL;
int zero = 0;
signed char var_13 = (signed char)-46;
signed char var_14 = (signed char)50;
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
