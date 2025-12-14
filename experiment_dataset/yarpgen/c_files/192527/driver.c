#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5202935926275896949LL;
unsigned int var_1 = 2986773768U;
unsigned long long int var_2 = 3788492374717620993ULL;
short var_3 = (short)2021;
short var_4 = (short)12408;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)59813;
unsigned char var_9 = (unsigned char)86;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)40;
unsigned int var_12 = 1714004431U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)5873;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 15132600542816403351ULL;
unsigned short var_18 = (unsigned short)25243;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 7946015863775321620ULL;
signed char var_21 = (signed char)14;
unsigned long long int var_22 = 3824337313859829378ULL;
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
