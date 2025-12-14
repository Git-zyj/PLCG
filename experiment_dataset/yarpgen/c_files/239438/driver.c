#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 335754507;
_Bool var_6 = (_Bool)0;
long long int var_7 = -2642404199050882155LL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)18760;
signed char var_15 = (signed char)-121;
unsigned long long int var_16 = 7218801334997496347ULL;
unsigned short var_19 = (unsigned short)62126;
int zero = 0;
short var_20 = (short)3766;
_Bool var_21 = (_Bool)1;
int var_22 = 483069043;
void init() {
}

void checksum() {
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
