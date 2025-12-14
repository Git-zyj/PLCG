#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
short var_2 = (short)31016;
int var_3 = -946625384;
short var_4 = (short)30824;
int var_5 = 690205605;
short var_6 = (short)-32064;
unsigned char var_7 = (unsigned char)82;
int var_8 = 449025232;
unsigned long long int var_9 = 15891769873092741369ULL;
unsigned char var_10 = (unsigned char)37;
unsigned long long int var_11 = 9439839673807864456ULL;
int var_12 = 2022185898;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3000353802U;
int var_15 = 1860535480;
int zero = 0;
unsigned char var_16 = (unsigned char)96;
short var_17 = (short)9331;
short var_18 = (short)-23946;
short var_19 = (short)-23793;
unsigned int var_20 = 2295063939U;
unsigned short var_21 = (unsigned short)2877;
short var_22 = (short)-3474;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)30;
unsigned long long int var_25 = 2192266070164975482ULL;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)1;
short arr_9 [24] [24] [24] [24] [24] ;
_Bool arr_12 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)30347 : (short)16042;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
