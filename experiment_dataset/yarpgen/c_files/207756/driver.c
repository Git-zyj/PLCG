#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9043921075548501016LL;
long long int var_2 = -7623832422249753493LL;
short var_3 = (short)32378;
_Bool var_4 = (_Bool)0;
short var_5 = (short)30696;
signed char var_7 = (signed char)38;
long long int var_8 = 7575362917249622372LL;
int zero = 0;
unsigned int var_10 = 1109101021U;
short var_11 = (short)-9176;
unsigned long long int var_12 = 16795374999174400386ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
