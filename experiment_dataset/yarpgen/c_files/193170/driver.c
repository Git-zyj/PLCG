#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58671;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-22000;
long long int var_6 = 3649085068008448805LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)56967;
short var_9 = (short)-11608;
long long int var_11 = -4965484971985118964LL;
int zero = 0;
unsigned int var_12 = 3701878468U;
unsigned long long int var_13 = 17494409695156292692ULL;
long long int var_14 = -3106578716589319715LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
