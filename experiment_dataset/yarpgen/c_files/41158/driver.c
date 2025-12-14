#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1418260022U;
short var_3 = (short)-22494;
short var_6 = (short)7780;
long long int var_7 = -2936449760206001464LL;
unsigned short var_8 = (unsigned short)109;
short var_17 = (short)-14071;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2851910705U;
long long int var_21 = 5810611487034985522LL;
short var_22 = (short)5344;
void init() {
}

void checksum() {
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
