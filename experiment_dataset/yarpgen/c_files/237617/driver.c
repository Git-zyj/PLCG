#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 359383457U;
unsigned int var_5 = 3415813180U;
signed char var_6 = (signed char)8;
int var_8 = -1177395691;
unsigned long long int var_9 = 8508356113916067004ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 8413906985338209660LL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2191901883U;
void init() {
}

void checksum() {
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
