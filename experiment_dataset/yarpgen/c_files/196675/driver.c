#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)211;
unsigned char var_2 = (unsigned char)106;
unsigned int var_6 = 510233921U;
int var_7 = -952426273;
unsigned long long int var_12 = 9773197872832898382ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 13024468811699070274ULL;
unsigned int var_15 = 1248664121U;
int zero = 0;
long long int var_17 = 4105354282476365474LL;
int var_18 = -695219260;
unsigned short var_19 = (unsigned short)13435;
long long int var_20 = 4270689047813250537LL;
unsigned int var_21 = 558727704U;
long long int var_22 = 7979225426658922801LL;
short var_23 = (short)-18274;
unsigned int arr_0 [18] [18] ;
long long int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
_Bool arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 2376601005U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 5846382068889338834LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 16344635803009804704ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
