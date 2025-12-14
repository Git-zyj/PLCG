#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1687300524U;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 4017127887U;
unsigned int var_5 = 2761938837U;
unsigned int var_6 = 1774946511U;
unsigned int var_7 = 520768080U;
unsigned int var_8 = 1481495188U;
unsigned short var_9 = (unsigned short)60730;
unsigned long long int var_11 = 18064818991159905802ULL;
unsigned int var_12 = 3681907355U;
unsigned long long int var_13 = 12318076093344272098ULL;
unsigned short var_14 = (unsigned short)4898;
unsigned char var_16 = (unsigned char)152;
int var_17 = -1727636778;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-25329;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-46;
unsigned long long int var_22 = 9417004863600261517ULL;
long long int var_23 = 2370873288073765897LL;
unsigned long long int var_24 = 11076313658818914797ULL;
unsigned char var_25 = (unsigned char)119;
unsigned long long int var_26 = 9100046799118958860ULL;
unsigned int var_27 = 3535224423U;
unsigned long long int var_28 = 17893682649543939093ULL;
long long int arr_7 [11] [11] ;
_Bool arr_15 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -1730868311984332737LL : -8750553328252625862LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
