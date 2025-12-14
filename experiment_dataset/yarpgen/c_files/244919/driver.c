#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5670577010516993283LL;
signed char var_2 = (signed char)-36;
int var_3 = 1877071184;
long long int var_4 = 5436585855218416866LL;
short var_5 = (short)8558;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)26172;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 9715448532774741108ULL;
unsigned long long int var_16 = 13978503304246750950ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)165;
short var_18 = (short)2727;
short var_19 = (short)11364;
int var_20 = 1960821864;
signed char var_21 = (signed char)38;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)145;
_Bool var_24 = (_Bool)0;
short var_25 = (short)22766;
int var_26 = 1526079251;
unsigned char var_27 = (unsigned char)189;
_Bool var_28 = (_Bool)0;
long long int var_29 = 1959865078509574428LL;
short var_30 = (short)-16377;
unsigned short arr_0 [24] [24] ;
short arr_1 [24] ;
_Bool arr_2 [16] ;
_Bool arr_3 [16] ;
_Bool arr_4 [16] ;
long long int arr_7 [24] ;
long long int arr_8 [24] ;
_Bool arr_9 [24] [24] ;
long long int arr_11 [24] ;
_Bool arr_14 [24] [24] [24] ;
long long int arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)33211;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)10219;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -7866419666761186110LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -6262002783937682675LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 8080287567701972213LL : 5865867486047853498LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 613766469538705500LL : -2011950994974360117LL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
