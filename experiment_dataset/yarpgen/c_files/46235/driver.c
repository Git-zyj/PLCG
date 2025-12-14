#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -881619253;
unsigned short var_5 = (unsigned short)27696;
signed char var_10 = (signed char)-96;
unsigned int var_14 = 3047028574U;
long long int var_15 = -5063412562712240872LL;
unsigned int var_18 = 3034549610U;
int zero = 0;
unsigned short var_20 = (unsigned short)6274;
unsigned int var_21 = 1016391256U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
