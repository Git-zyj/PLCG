#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30255;
unsigned long long int var_3 = 9998446754325667684ULL;
unsigned long long int var_4 = 12072635925686154873ULL;
unsigned int var_7 = 2527144907U;
unsigned long long int var_8 = 5489069105021301252ULL;
unsigned long long int var_11 = 1877999183415481325ULL;
unsigned char var_12 = (unsigned char)231;
unsigned int var_15 = 707336650U;
unsigned long long int var_16 = 9589146545060819275ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -5242204441406376337LL;
long long int var_20 = -657980569307361253LL;
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
