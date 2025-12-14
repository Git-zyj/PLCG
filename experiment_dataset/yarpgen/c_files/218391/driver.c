#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-29;
_Bool var_10 = (_Bool)1;
unsigned char var_18 = (unsigned char)184;
unsigned long long int var_19 = 8820425395827687447ULL;
int zero = 0;
int var_20 = -99588578;
long long int var_21 = 5891313357839010710LL;
short var_22 = (short)-13816;
unsigned long long int var_23 = 9851428888351538350ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
