#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11381;
unsigned short var_1 = (unsigned short)30414;
unsigned long long int var_3 = 14582345333068398796ULL;
short var_5 = (short)-7918;
long long int var_7 = 194049574030244284LL;
unsigned int var_9 = 3058405330U;
short var_11 = (short)-15504;
short var_12 = (short)29406;
long long int var_14 = -467399582269457936LL;
int zero = 0;
unsigned int var_15 = 4265936767U;
int var_16 = 210963255;
long long int var_17 = 5888426540575695298LL;
_Bool var_18 = (_Bool)1;
unsigned short arr_3 [19] ;
unsigned int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)30947;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 2771313210U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
