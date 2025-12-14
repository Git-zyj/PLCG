#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -366097749;
int var_5 = 774920824;
int var_8 = -779046247;
long long int var_9 = 5495806753278260901LL;
long long int var_11 = 4224100224270101227LL;
long long int var_14 = -392639336688053520LL;
int zero = 0;
short var_16 = (short)-11002;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 2709368344447892060ULL;
int var_19 = -709094355;
unsigned short var_20 = (unsigned short)52134;
short var_21 = (short)16229;
unsigned char var_22 = (unsigned char)42;
int var_23 = -2044052752;
unsigned short var_24 = (unsigned short)44530;
unsigned short var_25 = (unsigned short)61929;
long long int var_26 = 3554450480219743915LL;
short var_27 = (short)-25200;
int arr_0 [16] [16] ;
long long int arr_1 [16] ;
unsigned short arr_2 [16] ;
unsigned short arr_3 [16] ;
int arr_4 [16] [16] ;
_Bool arr_5 [16] [16] ;
_Bool arr_6 [16] ;
unsigned short arr_9 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1725847762 : -1823840324;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -8290877299498241136LL : -458881813816459165LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32306 : (unsigned short)51178;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1936 : (unsigned short)32452;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -1252098216 : 641720155;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)11311 : (unsigned short)40918;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
