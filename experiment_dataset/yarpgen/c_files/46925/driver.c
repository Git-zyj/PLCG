#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2021592487;
signed char var_1 = (signed char)-14;
unsigned int var_2 = 3057686149U;
signed char var_4 = (signed char)-87;
unsigned long long int var_5 = 7567774262072449356ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 4111868465U;
signed char var_8 = (signed char)88;
unsigned int var_9 = 2172898359U;
_Bool var_11 = (_Bool)1;
int var_12 = -169085370;
int var_13 = -1936875623;
short var_14 = (short)-1134;
int var_15 = 1997543051;
unsigned short var_16 = (unsigned short)52348;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)10;
unsigned short var_19 = (unsigned short)28114;
signed char var_20 = (signed char)-29;
int var_21 = 288347952;
int var_22 = 1003673108;
_Bool var_23 = (_Bool)1;
int var_24 = -1434051605;
unsigned long long int var_25 = 6676592960169463158ULL;
signed char var_26 = (signed char)88;
short var_27 = (short)18027;
short var_28 = (short)-19337;
unsigned long long int var_29 = 13529397081172052846ULL;
unsigned int var_30 = 2942833147U;
_Bool var_31 = (_Bool)0;
short var_32 = (short)26755;
_Bool var_33 = (_Bool)0;
short var_34 = (short)-16627;
short var_35 = (short)-3245;
_Bool var_36 = (_Bool)1;
int var_37 = 1646237060;
signed char var_38 = (signed char)-14;
unsigned int var_39 = 3606188219U;
short var_40 = (short)-349;
unsigned long long int var_41 = 14305710699457104561ULL;
short arr_6 [23] [23] [23] ;
unsigned long long int arr_16 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-18323 : (short)20990;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = 11744461969812016562ULL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
