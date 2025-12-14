#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25196;
short var_3 = (short)7279;
int var_4 = 1462063482;
unsigned char var_5 = (unsigned char)158;
short var_6 = (short)9781;
short var_7 = (short)2557;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-69;
short var_13 = (short)-17190;
int var_14 = -647348387;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6016084571353753234ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)55857;
unsigned int var_20 = 3423690403U;
int var_21 = -1966896848;
short var_22 = (short)1354;
short var_23 = (short)32443;
unsigned short var_24 = (unsigned short)36925;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)48504;
unsigned char var_27 = (unsigned char)196;
unsigned long long int arr_8 [10] [10] [10] ;
short arr_11 [10] [10] [10] [10] [10] ;
long long int arr_13 [12] ;
_Bool arr_15 [12] ;
unsigned char arr_25 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 5075508612972172078ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-3627;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = -5680460997486593807LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (unsigned char)238;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
