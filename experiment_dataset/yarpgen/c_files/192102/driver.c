#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)89;
signed char var_5 = (signed char)35;
signed char var_6 = (signed char)3;
long long int var_7 = -5805981110395411898LL;
signed char var_9 = (signed char)34;
int var_10 = -1394281369;
int zero = 0;
signed char var_12 = (signed char)-19;
long long int var_13 = 2955534159384958027LL;
short var_14 = (short)6783;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
