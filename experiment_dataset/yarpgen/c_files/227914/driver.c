#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2770348783U;
unsigned short var_1 = (unsigned short)14445;
signed char var_2 = (signed char)86;
signed char var_4 = (signed char)36;
unsigned long long int var_7 = 17898668067176279867ULL;
unsigned short var_8 = (unsigned short)51735;
unsigned short var_9 = (unsigned short)154;
unsigned char var_10 = (unsigned char)245;
long long int var_11 = -8303720166924217767LL;
signed char var_12 = (signed char)-75;
signed char var_13 = (signed char)63;
long long int var_14 = -7713045148959275783LL;
unsigned short var_15 = (unsigned short)33821;
unsigned long long int var_16 = 7277931464532375311ULL;
int zero = 0;
unsigned int var_17 = 4191259480U;
short var_18 = (short)13789;
short var_19 = (short)1750;
short var_20 = (short)-27647;
unsigned short var_21 = (unsigned short)13302;
short var_22 = (short)-28986;
unsigned long long int var_23 = 11254724852940104608ULL;
unsigned short var_24 = (unsigned short)48523;
unsigned short var_25 = (unsigned short)45253;
unsigned long long int var_26 = 823976684433906755ULL;
unsigned short var_27 = (unsigned short)22501;
unsigned long long int var_28 = 16627558430199605606ULL;
unsigned char arr_18 [13] [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? (unsigned char)193 : (unsigned char)136;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
