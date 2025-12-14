#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)12165;
signed char var_9 = (signed char)17;
unsigned int var_15 = 93816583U;
int var_16 = -2009024315;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)114;
unsigned char var_20 = (unsigned char)100;
long long int var_21 = 5186082366030668110LL;
unsigned long long int var_22 = 15205404229629348965ULL;
unsigned long long int var_23 = 5211919574019862978ULL;
int var_24 = -747355973;
short var_25 = (short)1479;
int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1464846842 : -239482951;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
