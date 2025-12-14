#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5328711900937695496ULL;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)61209;
signed char var_6 = (signed char)90;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-115;
unsigned short var_9 = (unsigned short)52855;
signed char var_10 = (signed char)-82;
unsigned long long int var_11 = 5522817953199746547ULL;
signed char var_12 = (signed char)-46;
long long int var_13 = -3511999449063176352LL;
unsigned long long int var_14 = 11960666152602480133ULL;
long long int var_15 = 3517720394012999324LL;
int zero = 0;
unsigned short var_16 = (unsigned short)4890;
unsigned char var_17 = (unsigned char)51;
unsigned short var_18 = (unsigned short)58424;
unsigned short var_19 = (unsigned short)64077;
signed char var_20 = (signed char)60;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)17;
int var_23 = -1585560853;
int var_24 = -586703831;
unsigned char var_25 = (unsigned char)238;
short var_26 = (short)905;
long long int var_27 = -2342974778186104834LL;
signed char arr_2 [18] ;
signed char arr_10 [18] [18] ;
_Bool arr_11 [18] [18] [18] [18] [18] ;
short arr_14 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (short)-1954;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
