#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)7882;
short var_5 = (short)3761;
signed char var_10 = (signed char)115;
signed char var_15 = (signed char)11;
unsigned long long int var_16 = 13806496263178967482ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)47493;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
