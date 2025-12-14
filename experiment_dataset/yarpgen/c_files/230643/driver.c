#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 15879412474455879848ULL;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)83;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-31811;
unsigned short var_16 = (unsigned short)50198;
signed char var_17 = (signed char)-1;
int zero = 0;
unsigned int var_18 = 3154754189U;
unsigned short var_19 = (unsigned short)7442;
unsigned short var_20 = (unsigned short)15911;
signed char var_21 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
