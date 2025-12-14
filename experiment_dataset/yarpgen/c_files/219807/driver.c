#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11172599628123516937ULL;
long long int var_2 = 4423791056041766638LL;
unsigned long long int var_4 = 12135763550239997612ULL;
short var_5 = (short)14230;
signed char var_7 = (signed char)30;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-92;
void init() {
}

void checksum() {
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
