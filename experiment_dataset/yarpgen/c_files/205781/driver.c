#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2091711527U;
short var_1 = (short)-3302;
short var_2 = (short)17387;
signed char var_3 = (signed char)-17;
unsigned int var_4 = 1368284317U;
signed char var_5 = (signed char)35;
unsigned long long int var_6 = 10421712499259746393ULL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)40;
int var_9 = -1363309186;
unsigned long long int var_10 = 6737278101540386022ULL;
unsigned short var_11 = (unsigned short)29662;
int var_12 = -875192411;
unsigned long long int var_13 = 6011165123736538289ULL;
signed char var_14 = (signed char)84;
int var_15 = -468658978;
unsigned short var_16 = (unsigned short)53526;
int zero = 0;
long long int var_17 = 2636755295294808768LL;
int var_18 = -2097612536;
_Bool var_19 = (_Bool)1;
int var_20 = -514302969;
unsigned short var_21 = (unsigned short)46350;
unsigned long long int var_22 = 7412786237415406573ULL;
short var_23 = (short)-11077;
signed char var_24 = (signed char)48;
short var_25 = (short)8493;
short var_26 = (short)-18125;
unsigned long long int var_27 = 11495841363909527595ULL;
_Bool arr_0 [16] ;
short arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned short arr_4 [19] ;
long long int arr_5 [19] ;
unsigned short arr_6 [19] [19] ;
long long int arr_7 [19] [19] ;
signed char arr_8 [19] ;
short arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)13225;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5166000314536866172ULL : 18300787904068797886ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)59882;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -6432884032275015921LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)37040;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 8574562157791533751LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)9228 : (short)521;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
