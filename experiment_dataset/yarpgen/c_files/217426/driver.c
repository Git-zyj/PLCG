#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -235991775;
unsigned short var_3 = (unsigned short)44061;
short var_4 = (short)20841;
unsigned long long int var_7 = 8040988583403269418ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-79;
unsigned long long int var_12 = 1550410181868090183ULL;
short var_13 = (short)-13624;
unsigned short var_15 = (unsigned short)38359;
int var_16 = -6900482;
unsigned short var_18 = (unsigned short)14124;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -4938525542690742487LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
