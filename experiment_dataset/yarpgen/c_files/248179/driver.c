#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30804;
_Bool var_2 = (_Bool)1;
unsigned char var_7 = (unsigned char)152;
unsigned char var_9 = (unsigned char)230;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4413041057937312800LL;
unsigned short var_14 = (unsigned short)14669;
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
