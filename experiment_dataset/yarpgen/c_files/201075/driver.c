#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
signed char var_1 = (signed char)101;
signed char var_3 = (signed char)-58;
long long int var_4 = 6642116595835635080LL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-14031;
unsigned int var_7 = 1109043571U;
int var_8 = 337017884;
unsigned short var_9 = (unsigned short)4141;
int zero = 0;
int var_10 = -552777489;
unsigned int var_11 = 2231492349U;
unsigned short var_12 = (unsigned short)6638;
int var_13 = -1976959307;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
