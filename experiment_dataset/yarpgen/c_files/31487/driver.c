#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_4 = -977198819;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)81;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-28;
_Bool var_17 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)-30556;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-40;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)251;
signed char var_25 = (signed char)(-127 - 1);
unsigned char var_26 = (unsigned char)79;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 4088797422U;
unsigned long long int var_29 = 5677274851751329770ULL;
int var_30 = 1664222158;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)1;
signed char var_33 = (signed char)-46;
long long int var_34 = -8818149344279523249LL;
int var_35 = -1216217165;
signed char var_36 = (signed char)97;
unsigned char var_37 = (unsigned char)38;
short var_38 = (short)-4202;
int var_39 = 1790876349;
int arr_0 [24] ;
short arr_4 [24] [24] [24] ;
unsigned short arr_5 [24] ;
unsigned long long int arr_9 [24] [24] ;
_Bool arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 69186566 : -439807201;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)29624;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)10088;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 11611903506160044841ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
