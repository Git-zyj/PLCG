#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17601269046659692805ULL;
long long int var_3 = -4302819495670953918LL;
unsigned short var_5 = (unsigned short)48223;
long long int var_6 = -7402172100201991916LL;
unsigned short var_7 = (unsigned short)39527;
unsigned long long int var_8 = 17590526929230677251ULL;
unsigned long long int var_9 = 10787439938983377568ULL;
unsigned short var_10 = (unsigned short)55847;
unsigned short var_11 = (unsigned short)2952;
unsigned short var_13 = (unsigned short)45862;
unsigned short var_15 = (unsigned short)51112;
long long int var_16 = -5461945635467753380LL;
int zero = 0;
unsigned short var_17 = (unsigned short)12197;
unsigned long long int var_18 = 4603690638142957665ULL;
unsigned short var_19 = (unsigned short)11848;
unsigned short var_20 = (unsigned short)48426;
unsigned short var_21 = (unsigned short)64307;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)8804;
long long int var_24 = -7776125299471974781LL;
unsigned long long int var_25 = 10123513554506762692ULL;
long long int var_26 = -1429873147668749692LL;
unsigned short arr_0 [25] [25] ;
unsigned int arr_2 [25] ;
unsigned short arr_3 [25] [25] [25] ;
unsigned short arr_8 [14] ;
unsigned short arr_10 [14] ;
unsigned short arr_11 [14] [14] ;
unsigned char arr_15 [14] ;
unsigned short arr_4 [25] [25] ;
long long int arr_5 [25] [25] ;
unsigned int arr_12 [14] [14] ;
unsigned short arr_13 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)360 : (unsigned short)53316;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2280931827U : 1414075904U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)58780;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned short)39313;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned short)26536;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)58519;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)50486 : (unsigned short)54111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -4785844521634834471LL : -6661105022321587226LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 1667345889U : 1325440895U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)16573 : (unsigned short)14899;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
