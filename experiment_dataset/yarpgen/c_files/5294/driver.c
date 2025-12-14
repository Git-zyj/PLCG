#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
short var_4 = (short)7474;
unsigned long long int var_5 = 9983326361219407113ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_11 = 6571601150560610642ULL;
signed char var_15 = (signed char)31;
int zero = 0;
signed char var_18 = (signed char)-46;
unsigned short var_19 = (unsigned short)60130;
int var_20 = -717108957;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
