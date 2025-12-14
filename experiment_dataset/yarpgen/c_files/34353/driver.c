#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-108;
signed char var_10 = (signed char)-113;
short var_13 = (short)30147;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-34;
signed char var_20 = (signed char)56;
long long int var_21 = 5039376381059126703LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
