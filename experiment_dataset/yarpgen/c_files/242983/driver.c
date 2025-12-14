#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_5 = (short)-19137;
long long int var_6 = -231777585231204738LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)237;
signed char var_9 = (signed char)55;
int var_10 = 210660880;
unsigned long long int var_11 = 13814195168295171688ULL;
short var_12 = (short)27695;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-30214;
long long int var_19 = -3868392917478781108LL;
short var_20 = (short)8490;
short var_21 = (short)5604;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
