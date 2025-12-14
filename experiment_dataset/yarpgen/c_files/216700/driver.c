#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)4024;
long long int var_6 = -6781919062857010275LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 3822243619U;
_Bool var_13 = (_Bool)0;
int var_14 = 1919149267;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)95;
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
