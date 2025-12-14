#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2102;
short var_3 = (short)-12537;
unsigned long long int var_4 = 16795925556522247811ULL;
int var_5 = -1692714196;
long long int var_6 = 6932850574118260475LL;
unsigned long long int var_7 = 4403062597848403673ULL;
unsigned long long int var_8 = 18256407446428537051ULL;
_Bool var_9 = (_Bool)1;
short var_11 = (short)14231;
unsigned char var_12 = (unsigned char)49;
long long int var_13 = 6833642559321452105LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)9;
short var_16 = (short)22476;
short var_17 = (short)-3391;
int var_18 = 540036872;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 4968990127775980693ULL;
unsigned short var_21 = (unsigned short)23318;
int var_22 = 956901717;
_Bool var_23 = (_Bool)1;
long long int var_24 = -6896032349811025152LL;
signed char var_25 = (signed char)-15;
unsigned long long int var_26 = 5691713864111132468ULL;
unsigned short var_27 = (unsigned short)15088;
signed char var_28 = (signed char)-58;
_Bool var_29 = (_Bool)1;
long long int var_30 = -2093619122965394950LL;
long long int var_31 = 1358231853824766491LL;
unsigned int var_32 = 544022792U;
unsigned short var_33 = (unsigned short)51744;
unsigned int arr_0 [22] ;
unsigned short arr_1 [22] [22] ;
long long int arr_2 [22] [22] ;
unsigned short arr_3 [22] [22] [22] ;
long long int arr_4 [22] [22] ;
signed char arr_6 [21] ;
long long int arr_9 [16] [16] ;
int arr_12 [16] ;
unsigned short arr_22 [15] [15] [15] ;
int arr_5 [22] ;
long long int arr_8 [21] ;
unsigned long long int arr_15 [16] [16] [16] ;
unsigned int arr_16 [16] ;
unsigned int arr_25 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 300160182U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)37218;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 1131013014882715495LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)39340 : (unsigned short)18599;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -7229904186122438906LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = -2516943689981959456LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 820717978;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)33919;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -978033278 : 586140946;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 6468709218972743346LL : 6261427167388823781LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 7180029233866513113ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 2668505954U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = 1312553875U;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
