#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2784720035038155069ULL;
short var_2 = (short)-32462;
int var_3 = -716099759;
unsigned short var_5 = (unsigned short)15148;
unsigned int var_6 = 1969615899U;
int var_7 = 631425654;
short var_8 = (short)5149;
_Bool var_9 = (_Bool)1;
long long int var_10 = -7269559634918698982LL;
unsigned int var_11 = 879588748U;
short var_12 = (short)29116;
unsigned char var_13 = (unsigned char)63;
long long int var_14 = 5636455229980444006LL;
unsigned short var_15 = (unsigned short)7641;
unsigned int var_16 = 1182456511U;
int zero = 0;
int var_17 = 708777601;
unsigned long long int var_18 = 7345747827606757800ULL;
unsigned int var_19 = 4233587103U;
unsigned int var_20 = 1230029835U;
int var_21 = 1113154388;
signed char var_22 = (signed char)-92;
signed char var_23 = (signed char)-16;
signed char var_24 = (signed char)-29;
unsigned int var_25 = 511195516U;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)-104;
unsigned long long int var_28 = 7101155785071811354ULL;
unsigned long long int var_29 = 16018272237002596496ULL;
int var_30 = -1890352910;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
