#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1962513122U;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 867562687U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-114;
signed char var_9 = (signed char)0;
signed char var_11 = (signed char)102;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 1211097532934960311LL;
unsigned int var_14 = 4195622014U;
unsigned int var_15 = 3389796199U;
unsigned short var_16 = (unsigned short)25068;
unsigned int var_17 = 3927752341U;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)61;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)27;
unsigned int var_22 = 2107030252U;
unsigned int var_23 = 3449842660U;
unsigned short arr_0 [12] ;
_Bool arr_4 [24] ;
_Bool arr_5 [24] ;
short arr_6 [24] ;
signed char arr_8 [24] [24] ;
long long int arr_9 [24] [24] [24] ;
signed char arr_14 [24] [24] ;
unsigned short arr_17 [24] ;
unsigned short arr_22 [24] [24] [24] ;
short arr_3 [12] [12] ;
short arr_7 [24] [24] ;
long long int arr_10 [24] [24] [24] ;
unsigned int arr_11 [24] [24] [24] ;
unsigned short arr_12 [24] [24] [24] ;
unsigned short arr_13 [24] ;
short arr_16 [24] [24] [24] ;
signed char arr_19 [24] ;
unsigned long long int arr_20 [24] [24] [24] ;
long long int arr_23 [24] [24] ;
short arr_26 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43841 : (unsigned short)30772;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-7540 : (short)16069;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1566222614787378576LL : 8752107391915931381LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11201 : (unsigned short)14487;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)28557 : (unsigned short)9747;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)9723 : (short)-20381;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)29088 : (short)-4977;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1376346333573365225LL : -8314998691246526172LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 372704674U : 2070865992U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)31420 : (unsigned short)38671;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30362 : (unsigned short)27332;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-6937 : (short)9705;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (signed char)87 : (signed char)-34;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11889666761517811090ULL : 3646798439249523880ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? -7751793814489726065LL : 5752327610983526207LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_26 [i_0] [i_1] = (short)-32140;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
