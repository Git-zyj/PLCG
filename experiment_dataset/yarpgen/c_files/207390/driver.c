#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)77;
unsigned int var_4 = 2988535577U;
short var_11 = (short)-4046;
long long int var_12 = 3005677487541742937LL;
long long int var_15 = -3673441063808119116LL;
unsigned long long int var_16 = 11704453538578549969ULL;
unsigned short var_17 = (unsigned short)24590;
int zero = 0;
unsigned short var_18 = (unsigned short)4036;
unsigned int var_19 = 2327245658U;
unsigned long long int var_20 = 7917978282878761053ULL;
unsigned short var_21 = (unsigned short)50068;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
