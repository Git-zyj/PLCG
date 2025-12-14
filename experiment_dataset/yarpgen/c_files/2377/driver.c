#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2663494717U;
unsigned short var_1 = (unsigned short)46670;
signed char var_2 = (signed char)-105;
unsigned int var_3 = 1325986006U;
unsigned short var_4 = (unsigned short)1791;
unsigned long long int var_5 = 3912847656255848775ULL;
unsigned int var_6 = 1409292157U;
short var_7 = (short)-24037;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_11 = (short)25610;
int var_12 = 400683456;
long long int var_13 = -1676460903639267581LL;
signed char var_14 = (signed char)65;
int zero = 0;
short var_16 = (short)31357;
unsigned char var_17 = (unsigned char)23;
signed char var_18 = (signed char)-33;
unsigned char var_19 = (unsigned char)144;
unsigned short var_20 = (unsigned short)48451;
unsigned char var_21 = (unsigned char)147;
int var_22 = 2068013807;
unsigned short var_23 = (unsigned short)13698;
unsigned short var_24 = (unsigned short)87;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-67;
short arr_5 [23] [23] [23] ;
unsigned short arr_8 [23] ;
unsigned char arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)4737 : (short)23253;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36737 : (unsigned short)3670;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (unsigned char)97;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
