#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -43443213;
short var_5 = (short)31076;
unsigned long long int var_6 = 7255614324054291385ULL;
unsigned short var_12 = (unsigned short)56903;
signed char var_13 = (signed char)107;
int zero = 0;
unsigned int var_19 = 3257979894U;
signed char var_20 = (signed char)-7;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1242927899U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
