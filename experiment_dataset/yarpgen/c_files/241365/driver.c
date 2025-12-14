#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4032964766U;
int var_2 = 147133210;
unsigned short var_4 = (unsigned short)12753;
unsigned int var_10 = 3986387482U;
signed char var_11 = (signed char)71;
unsigned short var_12 = (unsigned short)32706;
unsigned int var_14 = 774708449U;
signed char var_17 = (signed char)-8;
int zero = 0;
short var_18 = (short)8875;
unsigned short var_19 = (unsigned short)31105;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)3074;
_Bool var_22 = (_Bool)1;
short var_23 = (short)12535;
signed char var_24 = (signed char)34;
int var_25 = -541739422;
unsigned long long int var_26 = 8877738397170450306ULL;
unsigned long long int var_27 = 3897473460764616621ULL;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)141;
unsigned short var_31 = (unsigned short)58594;
signed char var_32 = (signed char)-60;
unsigned long long int var_33 = 16515773722943698851ULL;
signed char var_34 = (signed char)-74;
unsigned long long int var_35 = 2640288535824505247ULL;
unsigned char arr_0 [14] ;
_Bool arr_1 [14] [14] ;
_Bool arr_2 [14] ;
unsigned long long int arr_4 [14] ;
short arr_5 [14] ;
int arr_6 [14] ;
unsigned short arr_8 [14] [14] [14] ;
long long int arr_14 [22] ;
unsigned long long int arr_15 [22] ;
unsigned short arr_16 [22] ;
_Bool arr_18 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 15638683268558762499ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)1712;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 1051246539;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)30265;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 3184651216260355132LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 14405876789904061336ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (unsigned short)37612;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
