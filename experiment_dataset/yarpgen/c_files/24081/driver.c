#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)70;
signed char var_4 = (signed char)55;
long long int var_5 = 3960812781974141304LL;
int var_6 = -1647633797;
short var_7 = (short)-21764;
short var_8 = (short)-30541;
short var_9 = (short)31005;
int var_11 = 1616792890;
unsigned short var_14 = (unsigned short)9258;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 9734645904038436573ULL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)69;
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
