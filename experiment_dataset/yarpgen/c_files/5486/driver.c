#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
short var_1 = (short)-814;
int var_4 = 1857687997;
unsigned int var_6 = 3302144774U;
unsigned short var_7 = (unsigned short)22207;
unsigned short var_9 = (unsigned short)5704;
int var_11 = 21263782;
short var_12 = (short)-7689;
int zero = 0;
unsigned short var_14 = (unsigned short)55952;
signed char var_15 = (signed char)-49;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 795973115U;
long long int var_18 = 4164181222478516970LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
