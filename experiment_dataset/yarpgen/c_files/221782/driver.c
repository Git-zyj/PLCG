#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
long long int var_2 = 5448370325459575002LL;
long long int var_3 = 6561084091210628373LL;
long long int var_4 = -6339212488424643682LL;
short var_5 = (short)11090;
long long int var_6 = 5251891228714854761LL;
short var_7 = (short)27864;
unsigned short var_8 = (unsigned short)37298;
long long int var_9 = -7594508784665889031LL;
int zero = 0;
int var_10 = 429702702;
unsigned short var_11 = (unsigned short)34544;
unsigned int var_12 = 1053593178U;
signed char var_13 = (signed char)-56;
unsigned char var_14 = (unsigned char)249;
signed char var_15 = (signed char)95;
unsigned short var_16 = (unsigned short)36685;
unsigned short var_17 = (unsigned short)62680;
unsigned short var_18 = (unsigned short)52494;
long long int var_19 = 6823931101388266394LL;
unsigned int var_20 = 1172045153U;
unsigned short var_21 = (unsigned short)27353;
long long int var_22 = -2399486089287237862LL;
unsigned int var_23 = 2222737637U;
long long int var_24 = 5974982001273330987LL;
long long int var_25 = 4181137768143794763LL;
unsigned int var_26 = 2839817929U;
short var_27 = (short)7208;
long long int var_28 = -5490080587425608190LL;
unsigned int var_29 = 3265743688U;
_Bool var_30 = (_Bool)1;
signed char var_31 = (signed char)-80;
unsigned short arr_5 [18] [18] ;
signed char arr_8 [18] ;
unsigned short arr_18 [18] [18] ;
short arr_24 [18] [18] ;
int arr_25 [18] [18] [18] ;
unsigned short arr_26 [18] [18] ;
unsigned char arr_32 [11] ;
unsigned short arr_33 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)30673;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)11533;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (short)30598;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 1161311926;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned short)22106;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_32 [i_0] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_33 [i_0] = (unsigned short)443;
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
