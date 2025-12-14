#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1308639136;
short var_1 = (short)27725;
unsigned short var_2 = (unsigned short)23833;
int var_3 = 1260743109;
int var_4 = -1752374629;
unsigned short var_5 = (unsigned short)60935;
signed char var_6 = (signed char)61;
short var_7 = (short)22374;
int var_8 = 1580790680;
unsigned long long int var_10 = 11161832550685385666ULL;
int zero = 0;
short var_12 = (short)17773;
int var_13 = 1290715865;
unsigned long long int var_14 = 2316140297218850951ULL;
int var_15 = -384014659;
unsigned int var_16 = 711015684U;
unsigned short var_17 = (unsigned short)737;
signed char var_18 = (signed char)-30;
int var_19 = -714144087;
unsigned char var_20 = (unsigned char)143;
unsigned short var_21 = (unsigned short)15864;
short var_22 = (short)3857;
short var_23 = (short)19883;
short var_24 = (short)26912;
signed char var_25 = (signed char)-111;
long long int arr_2 [15] [15] ;
_Bool arr_7 [12] ;
unsigned char arr_19 [12] [12] ;
unsigned char arr_23 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 6276880240147812470LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)242 : (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (unsigned char)159;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
