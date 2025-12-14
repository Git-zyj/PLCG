#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56065;
unsigned int var_3 = 3176275545U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)118;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)8995;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)86;
int zero = 0;
unsigned int var_17 = 3414491370U;
unsigned int var_18 = 4253158538U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
