#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2422600111U;
int var_1 = -136562948;
unsigned int var_2 = 1398557701U;
unsigned int var_3 = 3507004881U;
signed char var_4 = (signed char)-92;
signed char var_5 = (signed char)112;
int var_7 = -2083871587;
_Bool var_8 = (_Bool)0;
long long int var_11 = -7914589704449497114LL;
signed char var_13 = (signed char)44;
_Bool var_14 = (_Bool)1;
int var_16 = -1854279407;
int zero = 0;
unsigned int var_17 = 1466253828U;
unsigned int var_18 = 46487837U;
signed char var_19 = (signed char)-106;
unsigned int var_20 = 185881873U;
unsigned int var_21 = 3387050732U;
short var_22 = (short)-9045;
unsigned char var_23 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
