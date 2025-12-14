#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14037895925863717950ULL;
unsigned char var_2 = (unsigned char)248;
int var_3 = 1636602432;
unsigned short var_4 = (unsigned short)45079;
int var_5 = 1027375436;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1853055918U;
long long int var_10 = -1390957837126822365LL;
long long int var_11 = -5027914561047678415LL;
unsigned int var_12 = 945708746U;
int zero = 0;
unsigned long long int var_15 = 12641455001808269489ULL;
unsigned long long int var_16 = 10097277058837672030ULL;
long long int var_17 = 7928202665268383172LL;
void init() {
}

void checksum() {
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
