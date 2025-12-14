#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_5 = -406406566;
unsigned short var_8 = (unsigned short)20203;
short var_16 = (short)18276;
int zero = 0;
unsigned short var_17 = (unsigned short)30364;
unsigned short var_18 = (unsigned short)41655;
signed char var_19 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
