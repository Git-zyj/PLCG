#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
unsigned long long int var_1 = 17854336262481196645ULL;
short var_2 = (short)3365;
unsigned int var_10 = 4147002661U;
unsigned char var_12 = (unsigned char)55;
long long int var_16 = 4875570710285696813LL;
int zero = 0;
unsigned short var_18 = (unsigned short)54433;
long long int var_19 = 2369599710736642070LL;
void init() {
}

void checksum() {
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
