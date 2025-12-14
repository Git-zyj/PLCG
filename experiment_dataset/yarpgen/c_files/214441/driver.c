#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)194;
unsigned short var_7 = (unsigned short)9501;
unsigned int var_8 = 592832079U;
unsigned long long int var_10 = 7776180081950204515ULL;
long long int var_12 = 3901834601471584522LL;
short var_14 = (short)-10771;
short var_15 = (short)31593;
short var_16 = (short)9779;
int zero = 0;
long long int var_17 = 7245056645341213851LL;
unsigned char var_18 = (unsigned char)177;
unsigned short var_19 = (unsigned short)16329;
unsigned short var_20 = (unsigned short)58713;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
