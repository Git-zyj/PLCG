#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
int var_3 = 627387343;
int var_5 = -1866756278;
int var_6 = 1555407216;
int var_7 = 1802957606;
int var_8 = 542294254;
unsigned int var_13 = 1760168567U;
int zero = 0;
short var_15 = (short)1549;
unsigned long long int var_16 = 3167073610950308960ULL;
unsigned short var_17 = (unsigned short)19952;
unsigned long long int var_18 = 8692723228637588365ULL;
unsigned short var_19 = (unsigned short)39845;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
