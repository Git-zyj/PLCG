#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1871331849;
unsigned long long int var_4 = 13194261833575205921ULL;
unsigned int var_7 = 1255735547U;
int var_8 = 1140462232;
unsigned int var_10 = 2056359546U;
unsigned long long int var_14 = 3880819605624164985ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 9224945686085697433ULL;
int zero = 0;
short var_17 = (short)-24679;
unsigned char var_18 = (unsigned char)125;
long long int var_19 = -1074278846390746703LL;
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
