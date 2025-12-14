#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4449653476917432274ULL;
int var_6 = 763946593;
_Bool var_9 = (_Bool)1;
_Bool var_17 = (_Bool)0;
short var_19 = (short)13992;
int zero = 0;
unsigned int var_20 = 3788174205U;
short var_21 = (short)-27573;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
