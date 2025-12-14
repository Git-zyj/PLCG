#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8256464972157952929LL;
signed char var_1 = (signed char)74;
short var_3 = (short)12037;
unsigned long long int var_4 = 7632516461057095931ULL;
_Bool var_5 = (_Bool)1;
_Bool var_10 = (_Bool)1;
long long int var_14 = -4964800148158060592LL;
long long int var_15 = -6454982664675667500LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)34581;
int zero = 0;
long long int var_19 = -5971922736897385887LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1683205237U;
unsigned short var_23 = (unsigned short)32270;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
