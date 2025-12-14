#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3302970167470278574LL;
long long int var_2 = -6584748479065904885LL;
int var_3 = 869946995;
unsigned long long int var_4 = 5036378728361101574ULL;
short var_5 = (short)-16920;
unsigned long long int var_6 = 13156851333480745801ULL;
unsigned short var_8 = (unsigned short)12223;
int var_9 = 1231306297;
unsigned short var_10 = (unsigned short)51644;
int zero = 0;
short var_11 = (short)23379;
unsigned long long int var_12 = 13375902615441754735ULL;
int var_13 = -225194816;
short var_14 = (short)23288;
long long int var_15 = 7956913296233036765LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)14589;
unsigned int arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
unsigned short arr_2 [21] [21] ;
unsigned long long int arr_5 [24] [24] ;
unsigned long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3026051502U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 14108205570368332033ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)3334;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 6285463773562108149ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 16461099518563659850ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
