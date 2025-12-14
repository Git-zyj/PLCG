#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3614883849844572849ULL;
unsigned short var_2 = (unsigned short)61242;
unsigned short var_3 = (unsigned short)2514;
unsigned int var_4 = 3855687647U;
short var_5 = (short)2967;
int var_7 = 1065506748;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)41;
long long int var_13 = -156998000879855336LL;
unsigned long long int var_14 = 9100130967980806678ULL;
unsigned long long int var_16 = 7552156771787958773ULL;
int zero = 0;
signed char var_17 = (signed char)33;
signed char var_18 = (signed char)-62;
short var_19 = (short)23185;
short var_20 = (short)-15343;
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
