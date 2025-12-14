#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5289304478232883935LL;
int var_3 = -513965081;
int var_5 = -1591774484;
unsigned int var_6 = 70938619U;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
long long int var_11 = 821730835489940298LL;
int var_14 = 149589128;
unsigned short var_16 = (unsigned short)40892;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)18394;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3418247962U;
unsigned short var_22 = (unsigned short)28319;
unsigned short var_23 = (unsigned short)13364;
unsigned short var_24 = (unsigned short)30344;
long long int var_25 = 2581585484607179736LL;
unsigned long long int var_26 = 6199920003196715808ULL;
unsigned int var_27 = 3472039351U;
unsigned int arr_2 [23] ;
int arr_3 [23] ;
_Bool arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 712721335U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1086980858;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
