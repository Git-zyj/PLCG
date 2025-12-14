#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 212664725231357312ULL;
unsigned int var_2 = 899347422U;
long long int var_4 = 5933322365235010386LL;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)4882;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 8338385423464722618ULL;
unsigned long long int var_14 = 1366059326608339683ULL;
int var_17 = 2052245533;
unsigned long long int var_19 = 17993104055362054493ULL;
int zero = 0;
int var_20 = 1838976561;
unsigned int var_21 = 2234918584U;
int var_22 = 2039258207;
unsigned int var_23 = 3675076789U;
unsigned long long int var_24 = 14674907586698974088ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
