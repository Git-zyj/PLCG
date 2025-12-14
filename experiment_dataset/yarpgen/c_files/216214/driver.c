#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18216139369997041655ULL;
signed char var_1 = (signed char)125;
signed char var_5 = (signed char)18;
int var_7 = -1598996171;
long long int var_15 = -3591278398896068794LL;
signed char var_18 = (signed char)54;
int zero = 0;
long long int var_20 = 5163311904421497695LL;
unsigned int var_21 = 1482904861U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
