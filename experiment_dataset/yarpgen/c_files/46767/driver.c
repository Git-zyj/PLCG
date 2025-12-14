#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5342607804174347964LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 5803442342587700913ULL;
signed char var_6 = (signed char)46;
unsigned short var_8 = (unsigned short)42776;
unsigned short var_11 = (unsigned short)7790;
int zero = 0;
unsigned long long int var_13 = 6321893676488842178ULL;
unsigned int var_14 = 2829084664U;
signed char var_15 = (signed char)-88;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1371687749301918287LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
