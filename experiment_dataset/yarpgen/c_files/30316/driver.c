#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2769596113U;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)18958;
unsigned short var_5 = (unsigned short)18373;
unsigned int var_7 = 1535736334U;
unsigned int var_8 = 529163546U;
unsigned int var_9 = 3795220424U;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)61195;
unsigned int var_12 = 3297828049U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)43430;
unsigned short var_16 = (unsigned short)8986;
unsigned short var_18 = (unsigned short)30315;
unsigned short var_19 = (unsigned short)1279;
int zero = 0;
unsigned short var_20 = (unsigned short)20329;
unsigned short var_21 = (unsigned short)55450;
unsigned short var_22 = (unsigned short)6405;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)34444;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)57488;
unsigned int var_27 = 557638824U;
unsigned short var_28 = (unsigned short)44991;
unsigned short var_29 = (unsigned short)12756;
unsigned short var_30 = (unsigned short)27276;
unsigned short arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
unsigned short arr_4 [23] [23] [23] ;
unsigned int arr_8 [23] [23] [23] [23] [23] ;
_Bool arr_9 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)48976;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)30262;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)57324;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 142552744U : 1876771842U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
