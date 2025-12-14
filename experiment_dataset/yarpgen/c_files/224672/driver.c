#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20026;
unsigned int var_1 = 2593340614U;
int var_2 = 1975516162;
long long int var_4 = 4399585309847295680LL;
unsigned int var_5 = 4219961890U;
int var_6 = 1405989814;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 2368812772U;
unsigned long long int var_12 = 15077700390966495156ULL;
short var_15 = (short)-4398;
int zero = 0;
unsigned long long int var_16 = 5803761580953275299ULL;
int var_17 = 1488096309;
short var_18 = (short)4429;
int var_19 = -1221214783;
unsigned long long int var_20 = 924183229603663413ULL;
unsigned char var_21 = (unsigned char)162;
unsigned long long int var_22 = 6840113087711053399ULL;
long long int arr_14 [21] [21] [21] ;
short arr_15 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1403923200136602858LL : 391840950143767513LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-14214 : (short)30050;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
