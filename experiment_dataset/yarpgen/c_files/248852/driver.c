#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14174509291825503002ULL;
short var_6 = (short)2231;
unsigned char var_8 = (unsigned char)184;
unsigned int var_9 = 4289691203U;
_Bool var_10 = (_Bool)1;
int var_11 = -403319217;
int zero = 0;
signed char var_14 = (signed char)28;
int var_15 = 1513419835;
void init() {
}

void checksum() {
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
