#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3789186039075779501LL;
unsigned short var_3 = (unsigned short)26195;
short var_4 = (short)-3572;
unsigned int var_5 = 932610443U;
unsigned short var_8 = (unsigned short)33501;
unsigned int var_9 = 1902307302U;
unsigned long long int var_11 = 3811689906166495097ULL;
unsigned int var_14 = 3619403963U;
unsigned int var_17 = 3091203697U;
int zero = 0;
unsigned short var_19 = (unsigned short)46814;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-5219;
unsigned long long int var_22 = 13562921089892938741ULL;
short var_23 = (short)-15937;
_Bool var_24 = (_Bool)0;
long long int var_25 = -7683024074271739967LL;
unsigned char var_26 = (unsigned char)25;
unsigned int var_27 = 1317248267U;
long long int arr_0 [12] [12] ;
short arr_1 [12] ;
short arr_2 [12] ;
_Bool arr_5 [13] ;
long long int arr_13 [25] ;
unsigned int arr_3 [12] [12] ;
short arr_6 [13] ;
short arr_10 [22] ;
unsigned int arr_11 [22] ;
short arr_12 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -7611185034839773507LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)31945 : (short)-671;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)4055 : (short)-30824;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 7247012623012954524LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1359961414U : 352653641U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)-13829;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)-7612;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 1730014307U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (short)-15150;
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
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
