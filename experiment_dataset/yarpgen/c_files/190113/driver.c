#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)227;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)35;
unsigned char var_5 = (unsigned char)212;
long long int var_7 = 7295157167551181846LL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-23802;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 9003548084293381308ULL;
short var_15 = (short)-25718;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)15568;
unsigned long long int var_18 = 7815957583240003700ULL;
long long int var_19 = 8352606018913388439LL;
short var_20 = (short)18199;
_Bool var_21 = (_Bool)1;
long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 2972439155513754240LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
