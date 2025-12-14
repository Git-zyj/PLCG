#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14033066589748548906ULL;
_Bool var_8 = (_Bool)1;
int var_10 = 1081037141;
signed char var_12 = (signed char)81;
short var_13 = (short)7938;
signed char var_19 = (signed char)67;
int zero = 0;
int var_20 = -724469668;
int var_21 = -1776163188;
short var_22 = (short)15567;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
