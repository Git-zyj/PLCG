#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7171596938051070022LL;
int var_7 = -940574425;
signed char var_8 = (signed char)-113;
unsigned char var_10 = (unsigned char)153;
unsigned int var_12 = 3488472810U;
signed char var_18 = (signed char)25;
int zero = 0;
unsigned char var_19 = (unsigned char)36;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2579874859U;
unsigned short var_22 = (unsigned short)20744;
_Bool var_23 = (_Bool)0;
short var_24 = (short)4619;
unsigned short var_25 = (unsigned short)39995;
unsigned long long int var_26 = 12376685528960610928ULL;
unsigned short var_27 = (unsigned short)28882;
short var_28 = (short)10578;
long long int var_29 = 3221386352815394016LL;
long long int var_30 = -8081928860999596701LL;
long long int var_31 = -5412111475390975030LL;
short var_32 = (short)12526;
_Bool arr_0 [20] ;
unsigned long long int arr_2 [20] ;
_Bool arr_3 [20] ;
unsigned int arr_6 [23] ;
short arr_7 [23] ;
signed char arr_8 [23] ;
signed char arr_11 [23] ;
signed char arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 7859545122644420609ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 3176966359U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-31190 : (short)6962;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)48 : (signed char)-24;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-58 : (signed char)-25;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)7 : (signed char)-122;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
