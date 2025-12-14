#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27250;
unsigned int var_3 = 545651195U;
long long int var_7 = 4054761266077090050LL;
int var_9 = 275507275;
unsigned short var_10 = (unsigned short)58499;
signed char var_12 = (signed char)51;
_Bool var_14 = (_Bool)1;
long long int var_16 = 5507051162955309213LL;
int zero = 0;
unsigned long long int var_17 = 13194472408791346324ULL;
int var_18 = -1605359206;
int var_19 = -2043580497;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)115;
unsigned int var_22 = 1662959964U;
unsigned int var_23 = 3766328887U;
unsigned int var_24 = 2103735616U;
unsigned int var_25 = 3961070752U;
unsigned char var_26 = (unsigned char)96;
unsigned long long int var_27 = 3722176428638604646ULL;
_Bool var_28 = (_Bool)0;
unsigned long long int arr_3 [24] ;
long long int arr_15 [24] [24] ;
int arr_18 [24] ;
unsigned char arr_2 [13] [13] ;
unsigned short arr_9 [24] ;
short arr_13 [24] [24] [24] ;
signed char arr_22 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 10512722533353148117ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = 565572908597985699LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = -557812060;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)49844;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-21655;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (signed char)121;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
