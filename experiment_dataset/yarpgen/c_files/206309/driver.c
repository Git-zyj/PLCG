#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)99;
unsigned short var_3 = (unsigned short)61193;
long long int var_4 = -4010175508359143500LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)46;
short var_10 = (short)9001;
unsigned short var_12 = (unsigned short)10493;
short var_13 = (short)19444;
_Bool var_15 = (_Bool)0;
long long int var_19 = -8604495659273700600LL;
int zero = 0;
short var_20 = (short)-3841;
unsigned int var_21 = 875760749U;
_Bool var_22 = (_Bool)1;
int var_23 = 16944715;
unsigned short var_24 = (unsigned short)22876;
unsigned char var_25 = (unsigned char)2;
unsigned int var_26 = 2108891081U;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)64;
signed char arr_0 [22] ;
unsigned int arr_1 [22] [22] ;
unsigned short arr_3 [22] ;
signed char arr_4 [22] [22] ;
unsigned long long int arr_5 [22] [22] [22] ;
_Bool arr_6 [22] [22] ;
long long int arr_11 [22] [22] [22] [22] [22] ;
_Bool arr_16 [22] [22] [22] [22] [22] [22] ;
long long int arr_18 [15] ;
unsigned short arr_19 [15] ;
signed char arr_2 [22] ;
_Bool arr_20 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 853740903U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)2813;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 5952091073048670391ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = -3323444919112046460LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 5218297690969666120LL : -4274541612059581670LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (unsigned short)34577;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
