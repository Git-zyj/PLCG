#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15340;
unsigned int var_3 = 2845375754U;
unsigned int var_4 = 3314177688U;
long long int var_5 = -478729715764372097LL;
short var_6 = (short)11328;
int var_8 = -1186611272;
unsigned int var_9 = 473117509U;
int zero = 0;
int var_10 = -491980140;
long long int var_11 = 7415189322803749857LL;
unsigned long long int var_12 = 16664933802287084668ULL;
unsigned int var_13 = 3142638311U;
long long int var_14 = 7923586246018767062LL;
long long int var_15 = -7761395148170021468LL;
unsigned int var_16 = 3140629970U;
long long int var_17 = -8527050838592987900LL;
int var_18 = -1090662824;
unsigned int var_19 = 3428690661U;
short var_20 = (short)-5460;
short var_21 = (short)-8357;
unsigned long long int var_22 = 11195388800130025424ULL;
unsigned char var_23 = (unsigned char)29;
short var_24 = (short)-13351;
short var_25 = (short)24079;
short var_26 = (short)4548;
unsigned int var_27 = 2310532459U;
long long int var_28 = -4339973083030869943LL;
long long int var_29 = 6272937632251899978LL;
unsigned int var_30 = 891517638U;
unsigned long long int arr_0 [24] ;
signed char arr_1 [24] [24] ;
unsigned char arr_2 [24] ;
signed char arr_5 [22] ;
short arr_11 [13] ;
long long int arr_16 [13] [13] [13] [13] [13] ;
long long int arr_17 [13] [13] ;
_Bool arr_18 [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 14720763576948458532ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)224 : (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (short)10329;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 7819335376919448202LL : 7064362186535826451LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = -2711443629867803366LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
