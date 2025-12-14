#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_9 = (unsigned char)230;
unsigned long long int var_13 = 10950908082115491212ULL;
unsigned short var_14 = (unsigned short)41450;
int var_17 = -582917489;
int zero = 0;
unsigned int var_18 = 494520420U;
long long int var_19 = -480570555657552594LL;
unsigned long long int var_20 = 12437438539384179756ULL;
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
