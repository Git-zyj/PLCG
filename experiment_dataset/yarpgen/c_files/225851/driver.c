#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)3;
_Bool var_7 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1505223250717010513ULL;
long long int var_15 = 2971371191617810302LL;
short var_16 = (short)-24612;
int zero = 0;
long long int var_19 = 5509369455458717473LL;
long long int var_20 = -345527005284764725LL;
_Bool var_21 = (_Bool)0;
int var_22 = 1560616217;
int var_23 = -1236091242;
long long int var_24 = 1278602862024004808LL;
int var_25 = 464805581;
signed char var_26 = (signed char)-34;
unsigned int var_27 = 2579823722U;
_Bool var_28 = (_Bool)0;
short var_29 = (short)5432;
_Bool var_30 = (_Bool)1;
_Bool arr_0 [19] ;
long long int arr_2 [19] ;
long long int arr_4 [24] [24] ;
long long int arr_5 [24] [24] ;
short arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -8325108674585227669LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = -9090180033428726489LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = -284614489167016120LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)24320;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
