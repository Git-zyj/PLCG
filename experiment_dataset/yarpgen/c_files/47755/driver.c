#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1707273592U;
long long int var_1 = 59872558146306304LL;
long long int var_4 = 7319748289782365394LL;
_Bool var_5 = (_Bool)1;
int var_6 = 1928942611;
int var_7 = 2065205835;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 15282571219802206426ULL;
unsigned int var_10 = 2607948497U;
long long int var_11 = -6802661237361829833LL;
unsigned long long int var_12 = 7813713344305736939ULL;
int zero = 0;
signed char var_14 = (signed char)-74;
unsigned char var_15 = (unsigned char)130;
int var_16 = 1512114317;
short var_17 = (short)-31717;
long long int var_18 = -296985729455252461LL;
signed char arr_0 [18] ;
_Bool arr_1 [18] [18] ;
long long int arr_2 [18] [18] ;
unsigned char arr_3 [15] ;
unsigned long long int arr_4 [15] ;
long long int arr_5 [15] ;
int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = -2865692756249309105LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 12915055682242166750ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -7267532116167660761LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -864344841;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
