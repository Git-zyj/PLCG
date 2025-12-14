#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2429299121U;
int var_2 = -54204067;
unsigned int var_3 = 1324624042U;
unsigned char var_8 = (unsigned char)95;
signed char var_11 = (signed char)71;
unsigned int var_12 = 3788316371U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)15;
int var_15 = -649403829;
signed char var_16 = (signed char)-14;
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
