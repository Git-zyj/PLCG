#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-9;
long long int var_6 = -6657837719124298265LL;
unsigned long long int var_11 = 6894025890773658246ULL;
int zero = 0;
signed char var_13 = (signed char)8;
long long int var_14 = -418950051966053635LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
