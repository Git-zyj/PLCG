#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1206645247U;
short var_6 = (short)29409;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 674537047966999723ULL;
int zero = 0;
signed char var_14 = (signed char)-4;
unsigned long long int var_15 = 12764233991806538843ULL;
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
