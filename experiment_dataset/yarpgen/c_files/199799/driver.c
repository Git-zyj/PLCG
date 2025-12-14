#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2424942104U;
int var_1 = 662735602;
int var_2 = 489142281;
unsigned int var_4 = 549177321U;
unsigned int var_5 = 684931226U;
long long int var_6 = -4664280649370079550LL;
int var_7 = 481553344;
unsigned char var_8 = (unsigned char)153;
short var_9 = (short)20171;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-20510;
short var_12 = (short)30812;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 1332970932;
unsigned char var_15 = (unsigned char)88;
unsigned int var_16 = 1946307217U;
int var_17 = -1619526114;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
