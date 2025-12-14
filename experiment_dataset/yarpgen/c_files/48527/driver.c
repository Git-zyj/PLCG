#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 917531356U;
short var_4 = (short)31793;
unsigned int var_5 = 1817754479U;
unsigned long long int var_7 = 6372005219430822203ULL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)13403;
int zero = 0;
short var_12 = (short)3447;
unsigned long long int var_13 = 13169252488727744180ULL;
unsigned long long int var_14 = 2440781703270971431ULL;
unsigned long long int var_15 = 15525691941612978787ULL;
long long int var_16 = -1018935955556227444LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
