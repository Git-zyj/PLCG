#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)23;
unsigned int var_2 = 1955730965U;
long long int var_3 = -8248366368530303717LL;
_Bool var_4 = (_Bool)0;
long long int var_6 = -6629427829755816089LL;
unsigned long long int var_7 = 1485769736589156883ULL;
long long int var_8 = 2585801024332207184LL;
int zero = 0;
int var_11 = 1783536928;
unsigned char var_12 = (unsigned char)65;
long long int var_13 = -2625946640561297737LL;
unsigned long long int var_14 = 7207806516068948645ULL;
unsigned short var_15 = (unsigned short)34167;
long long int var_16 = -7861595182132238481LL;
long long int var_17 = -230358866844686027LL;
long long int arr_0 [25] [25] ;
unsigned char arr_1 [25] ;
long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 7732988948483489799LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -7893121746667528636LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
