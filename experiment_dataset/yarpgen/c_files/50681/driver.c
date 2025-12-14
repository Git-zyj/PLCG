#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7767210834111975127LL;
int var_4 = -1617874524;
long long int var_5 = -808904142004926927LL;
unsigned char var_11 = (unsigned char)168;
_Bool var_12 = (_Bool)0;
int var_14 = -1964911415;
int zero = 0;
signed char var_18 = (signed char)-7;
signed char var_19 = (signed char)67;
short var_20 = (short)15250;
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
