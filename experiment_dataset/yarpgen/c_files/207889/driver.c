#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3621708236U;
unsigned short var_1 = (unsigned short)14975;
int var_3 = 1116544433;
unsigned int var_4 = 1270941007U;
_Bool var_7 = (_Bool)1;
signed char var_11 = (signed char)120;
signed char var_13 = (signed char)-50;
signed char var_16 = (signed char)13;
unsigned short var_17 = (unsigned short)37464;
int zero = 0;
int var_18 = 291333733;
short var_19 = (short)2094;
unsigned short var_20 = (unsigned short)37889;
long long int var_21 = 7143353970452064509LL;
unsigned short var_22 = (unsigned short)28744;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
