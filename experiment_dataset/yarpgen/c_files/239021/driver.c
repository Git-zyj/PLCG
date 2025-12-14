#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1207183149;
short var_3 = (short)-16864;
long long int var_5 = -9219971132192495146LL;
long long int var_6 = -5923222650310158200LL;
signed char var_10 = (signed char)-120;
short var_11 = (short)5198;
short var_12 = (short)-25803;
unsigned int var_14 = 183134146U;
signed char var_15 = (signed char)77;
short var_16 = (short)29870;
unsigned long long int var_18 = 1401143929302177861ULL;
unsigned long long int var_19 = 16605284869992609832ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 17806246100919935171ULL;
int var_22 = 1214000222;
unsigned long long int var_23 = 15225931502138408978ULL;
unsigned short var_24 = (unsigned short)39774;
_Bool var_25 = (_Bool)1;
int var_26 = 751552126;
unsigned long long int var_27 = 234503593175497371ULL;
long long int var_28 = 643575670317192033LL;
int var_29 = -724052754;
unsigned long long int arr_1 [12] ;
long long int arr_2 [12] [12] ;
_Bool arr_5 [12] ;
int arr_6 [12] ;
long long int arr_9 [19] [19] ;
short arr_10 [19] [19] ;
_Bool arr_12 [19] [19] ;
_Bool arr_13 [19] [19] ;
long long int arr_16 [12] ;
signed char arr_17 [12] ;
unsigned long long int arr_4 [12] [12] ;
long long int arr_14 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 6402841234852908309ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 1959088491140761557LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -1980278453;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = -3027364291877562313LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (short)2632;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = 8426360219301249828LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 6216719122149038518ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? -1761161332509401903LL : -7053956506485258598LL;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
