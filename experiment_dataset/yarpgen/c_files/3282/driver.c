#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4782248551908352950LL;
long long int var_8 = 7858471827059032399LL;
short var_10 = (short)-2640;
unsigned int var_11 = 2611455983U;
long long int var_14 = -21700982233761990LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)61337;
unsigned int var_19 = 3242930769U;
unsigned char var_20 = (unsigned char)155;
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
