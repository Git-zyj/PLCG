#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = -1718079907044102400LL;
signed char var_4 = (signed char)81;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)6474;
unsigned long long int var_13 = 7402961918288564553ULL;
long long int var_15 = 4172487908466006842LL;
unsigned short var_16 = (unsigned short)43544;
int var_17 = 1049182802;
int zero = 0;
short var_18 = (short)-16482;
long long int var_19 = -4932149721572168100LL;
unsigned int var_20 = 465332128U;
unsigned int var_21 = 141260121U;
unsigned long long int var_22 = 417983288197802248ULL;
long long int var_23 = -2521222291223523300LL;
long long int arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 1488594881844589851LL;
}

void checksum() {
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
