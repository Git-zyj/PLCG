#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20257;
unsigned int var_14 = 2054264430U;
int zero = 0;
long long int var_15 = -565456035276832648LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)10529;
signed char var_18 = (signed char)-3;
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
