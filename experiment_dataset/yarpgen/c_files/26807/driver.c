#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)235;
long long int var_3 = 7043330388694454851LL;
short var_6 = (short)23866;
_Bool var_7 = (_Bool)0;
long long int var_8 = -8093105573043200370LL;
unsigned short var_9 = (unsigned short)51413;
unsigned long long int var_11 = 18225438482621251636ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)27;
unsigned long long int var_13 = 2565880233559789846ULL;
long long int var_14 = -2551295366424199286LL;
_Bool var_15 = (_Bool)1;
long long int var_16 = -1884213534574297524LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
