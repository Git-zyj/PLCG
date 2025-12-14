#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)30445;
unsigned int var_10 = 2846337133U;
int var_11 = -1706658254;
_Bool var_12 = (_Bool)0;
signed char var_15 = (signed char)62;
short var_17 = (short)12595;
long long int var_19 = -2523544551772197329LL;
int zero = 0;
short var_20 = (short)-8754;
unsigned long long int var_21 = 3437738290810671033ULL;
_Bool var_22 = (_Bool)0;
long long int var_23 = 3291683845396065435LL;
short var_24 = (short)-20820;
_Bool var_25 = (_Bool)1;
short var_26 = (short)31241;
long long int arr_0 [24] ;
short arr_1 [24] [24] ;
unsigned int arr_3 [13] ;
_Bool arr_4 [13] [13] ;
unsigned long long int arr_2 [24] ;
unsigned long long int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 7169846838545536487LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-7580;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 93833740U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 5905805934310363351ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 7972176299336901143ULL : 1168028831563448872ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
