#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1639809217;
unsigned int var_3 = 2112921430U;
long long int var_6 = 6571383783176485436LL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)177;
short var_9 = (short)-3001;
int zero = 0;
unsigned char var_11 = (unsigned char)158;
unsigned char var_12 = (unsigned char)63;
int var_13 = 367951378;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)10314;
long long int var_16 = 539726612584021284LL;
unsigned int var_17 = 902192592U;
unsigned long long int var_18 = 10746092867942067428ULL;
signed char var_19 = (signed char)34;
unsigned int var_20 = 3173932647U;
unsigned int var_21 = 3844616099U;
short var_22 = (short)28500;
short var_23 = (short)-7211;
int var_24 = 1347606468;
short var_25 = (short)31728;
long long int arr_0 [23] ;
short arr_3 [16] ;
unsigned int arr_7 [16] [16] ;
unsigned long long int arr_8 [16] [16] ;
short arr_15 [16] ;
long long int arr_19 [18] ;
long long int arr_20 [18] [18] ;
unsigned short arr_21 [18] ;
unsigned short arr_27 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 4223587884070936367LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-21240;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 1650809129U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 4367962386983727983ULL : 16703271288991817615ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (short)5386;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 7220191197359999689LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = 4080623910885602697LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (unsigned short)20358;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = (unsigned short)25082;
}

void checksum() {
    hash(&seed, var_11);
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
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
