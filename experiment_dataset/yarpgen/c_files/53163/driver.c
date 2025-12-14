#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 1907614275;
unsigned int var_3 = 3227836951U;
_Bool var_4 = (_Bool)0;
int var_5 = -1254988215;
unsigned int var_7 = 3130053983U;
long long int var_10 = 3350890336049616213LL;
unsigned short var_11 = (unsigned short)4956;
unsigned short var_14 = (unsigned short)46345;
unsigned short var_16 = (unsigned short)56669;
int zero = 0;
unsigned short var_17 = (unsigned short)48213;
unsigned short var_18 = (unsigned short)40868;
unsigned char var_19 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
