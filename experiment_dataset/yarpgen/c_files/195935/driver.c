#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1556654221;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)179;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 4156448188U;
int zero = 0;
unsigned int var_15 = 3911651689U;
unsigned int var_16 = 263587168U;
long long int var_17 = 7664115793926633450LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
