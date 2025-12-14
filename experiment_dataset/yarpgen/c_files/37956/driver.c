#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3062404139186963507LL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)141;
long long int var_4 = 7653039971127961765LL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)15426;
long long int var_10 = -4232604581689618268LL;
unsigned int var_18 = 832731665U;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -1387283426;
void init() {
}

void checksum() {
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
