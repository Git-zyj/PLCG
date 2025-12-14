#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
unsigned short var_1 = (unsigned short)64944;
unsigned long long int var_2 = 14458517299005271055ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)169;
unsigned long long int var_7 = 7020159376396467486ULL;
unsigned long long int var_8 = 18303085704948258714ULL;
long long int var_9 = -1287116291655744027LL;
short var_12 = (short)-18217;
short var_14 = (short)-18272;
short var_15 = (short)1443;
signed char var_16 = (signed char)-13;
int zero = 0;
long long int var_17 = 1969580887417886486LL;
unsigned long long int var_18 = 9604153808889056356ULL;
long long int var_19 = -110874968619718364LL;
unsigned short var_20 = (unsigned short)62722;
unsigned short var_21 = (unsigned short)31740;
int var_22 = 547857791;
unsigned int var_23 = 1497132362U;
int var_24 = 1714090276;
unsigned short var_25 = (unsigned short)44171;
int var_26 = 786561000;
signed char arr_0 [10] ;
int arr_1 [10] ;
unsigned short arr_3 [16] ;
short arr_4 [16] ;
short arr_6 [16] ;
unsigned long long int arr_8 [16] [16] [16] ;
int arr_12 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-95 : (signed char)66;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -533162021 : 2099322778;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)12721;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)13072;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)-6269;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 11760348359940382633ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -1224157208;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
