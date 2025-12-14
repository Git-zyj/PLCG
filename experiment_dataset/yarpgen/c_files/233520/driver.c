#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)118;
signed char var_3 = (signed char)-4;
signed char var_4 = (signed char)-120;
signed char var_6 = (signed char)3;
signed char var_10 = (signed char)-100;
signed char var_11 = (signed char)31;
signed char var_12 = (signed char)56;
signed char var_16 = (signed char)-21;
signed char var_18 = (signed char)-113;
int zero = 0;
signed char var_19 = (signed char)96;
signed char var_20 = (signed char)75;
signed char var_21 = (signed char)-39;
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
