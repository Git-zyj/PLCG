#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
short var_1 = (short)-15824;
unsigned char var_3 = (unsigned char)39;
unsigned int var_4 = 469592894U;
int var_7 = -769050715;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)82;
unsigned short var_11 = (unsigned short)19062;
long long int var_12 = -7691118689461971368LL;
unsigned int var_14 = 876865761U;
int zero = 0;
unsigned int var_15 = 1735764209U;
unsigned int var_16 = 3240217407U;
unsigned int var_17 = 3584445861U;
int var_18 = 1311381570;
unsigned long long int var_19 = 13263909480335375156ULL;
signed char var_20 = (signed char)-120;
_Bool var_21 = (_Bool)0;
int var_22 = -555061597;
unsigned int var_23 = 2504000887U;
unsigned long long int var_24 = 16522745318126435741ULL;
signed char arr_2 [14] [14] ;
unsigned short arr_5 [14] [14] [14] ;
int arr_7 [14] [14] ;
long long int arr_10 [25] ;
long long int arr_11 [25] ;
_Bool arr_12 [25] ;
long long int arr_13 [25] [25] ;
_Bool arr_14 [25] [25] ;
unsigned long long int arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)23074;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 1596963130;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = -1620144389004050060LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 1709825212327770495LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = -8046410555236571502LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 10841554262443131720ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
