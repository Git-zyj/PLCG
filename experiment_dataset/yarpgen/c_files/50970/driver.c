#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26689;
short var_3 = (short)-31747;
signed char var_9 = (signed char)41;
unsigned int var_10 = 177506296U;
signed char var_12 = (signed char)-75;
short var_13 = (short)18239;
long long int var_15 = 1561766083768927983LL;
long long int var_16 = -2180588412097848996LL;
unsigned int var_18 = 3953976654U;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)100;
unsigned short var_21 = (unsigned short)52358;
signed char var_22 = (signed char)-76;
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
