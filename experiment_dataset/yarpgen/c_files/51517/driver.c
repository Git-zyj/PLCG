#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12895172227541322790ULL;
signed char var_5 = (signed char)-119;
signed char var_6 = (signed char)-26;
short var_8 = (short)2850;
long long int var_10 = -1720571546037539788LL;
signed char var_11 = (signed char)115;
int zero = 0;
int var_12 = 2134164782;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)242;
int var_15 = 2113414979;
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
