#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4071419617650166445LL;
unsigned long long int var_2 = 11930158105860162130ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)27419;
signed char var_6 = (signed char)114;
short var_7 = (short)-28970;
long long int var_9 = -6945281617074852915LL;
_Bool var_11 = (_Bool)1;
int var_13 = 1568100539;
short var_14 = (short)-27197;
int zero = 0;
unsigned short var_15 = (unsigned short)57693;
long long int var_16 = 4708475078725983197LL;
unsigned int var_17 = 2858697446U;
unsigned char var_18 = (unsigned char)45;
short var_19 = (short)-2699;
short var_20 = (short)21923;
long long int var_21 = 2891275020485106494LL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)21825;
unsigned long long int var_24 = 17153136281246495230ULL;
unsigned int var_25 = 3497349840U;
short var_26 = (short)-15610;
int var_27 = 1617950794;
unsigned char var_28 = (unsigned char)67;
short var_29 = (short)-22697;
short arr_0 [21] ;
long long int arr_1 [21] ;
short arr_2 [21] [21] ;
short arr_7 [21] [21] ;
unsigned long long int arr_9 [18] ;
unsigned long long int arr_12 [21] ;
int arr_3 [21] [21] ;
_Bool arr_16 [21] ;
short arr_17 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)224;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -928741225716466492LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-18889;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (short)26094;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 15778547798295772619ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2519150906942054111ULL : 18273108562268303055ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 920958579;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)-18996 : (short)-185;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
