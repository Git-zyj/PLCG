#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
unsigned long long int var_1 = 14157960099951785409ULL;
unsigned long long int var_5 = 10225442352284195475ULL;
unsigned long long int var_9 = 6472488766899178985ULL;
short var_11 = (short)2774;
_Bool var_14 = (_Bool)0;
short var_15 = (short)28918;
int zero = 0;
int var_18 = 883869007;
int var_19 = 152759496;
unsigned long long int var_20 = 10946261337013830378ULL;
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
