#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 196047395846057472ULL;
unsigned long long int var_6 = 12110572841156053785ULL;
long long int var_11 = -694510998175686254LL;
short var_12 = (short)-22981;
long long int var_15 = -8203878498412892745LL;
int zero = 0;
unsigned char var_17 = (unsigned char)232;
long long int var_18 = -910710327409805415LL;
int var_19 = -1520355686;
short var_20 = (short)-26796;
short var_21 = (short)30092;
unsigned long long int var_22 = 1017371283816420119ULL;
unsigned long long int arr_2 [17] ;
long long int arr_3 [17] ;
long long int arr_5 [17] [17] ;
unsigned short arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 5066705150098503813ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 3961790621207612461LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 7313977740985927385LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)57852;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
