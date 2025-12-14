#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1863614222;
int var_4 = -1074076170;
unsigned char var_6 = (unsigned char)237;
long long int var_7 = -5214839199825460367LL;
signed char var_8 = (signed char)-110;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 3715241784517797351ULL;
unsigned int var_14 = 3352700291U;
short var_17 = (short)16224;
signed char var_18 = (signed char)-12;
long long int var_19 = -5261139765751501833LL;
int zero = 0;
unsigned long long int var_20 = 1872790448688109729ULL;
unsigned short var_21 = (unsigned short)28041;
int var_22 = -530882843;
unsigned short var_23 = (unsigned short)50567;
unsigned short var_24 = (unsigned short)59101;
_Bool var_25 = (_Bool)1;
int var_26 = -1305045153;
short var_27 = (short)17092;
int var_28 = 1985209876;
_Bool var_29 = (_Bool)0;
short var_30 = (short)-30908;
_Bool var_31 = (_Bool)0;
short arr_0 [25] [25] ;
_Bool arr_1 [25] ;
_Bool arr_2 [25] ;
short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-20697;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)-21221;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
