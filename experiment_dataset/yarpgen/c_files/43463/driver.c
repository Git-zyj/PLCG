#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned int var_1 = 1834629876U;
unsigned short var_2 = (unsigned short)28186;
int var_3 = 2124454163;
long long int var_4 = -8163860216596174262LL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-2482;
unsigned long long int var_7 = 11252622006923116190ULL;
short var_8 = (short)19684;
unsigned long long int var_9 = 10433809246070732606ULL;
unsigned char var_10 = (unsigned char)94;
unsigned char var_11 = (unsigned char)203;
_Bool var_12 = (_Bool)0;
int var_13 = -1556198349;
int zero = 0;
unsigned char var_15 = (unsigned char)220;
unsigned int var_16 = 3128084059U;
short var_17 = (short)-17025;
signed char var_18 = (signed char)-46;
int var_19 = -207862089;
int var_20 = -1010596476;
unsigned long long int var_21 = 9713645416803839639ULL;
unsigned int var_22 = 3476173574U;
unsigned short var_23 = (unsigned short)41412;
unsigned long long int var_24 = 13890246688906912182ULL;
unsigned long long int var_25 = 18195585416493640008ULL;
unsigned int var_26 = 2196625261U;
_Bool var_27 = (_Bool)0;
long long int var_28 = 1795638385458250393LL;
unsigned long long int arr_5 [11] [11] [11] [11] ;
short arr_7 [11] ;
unsigned int arr_9 [11] [11] [11] [11] [11] ;
unsigned char arr_10 [22] ;
unsigned long long int arr_11 [22] ;
unsigned int arr_14 [23] ;
int arr_15 [23] ;
unsigned long long int arr_19 [16] [16] ;
long long int arr_23 [16] [16] [16] ;
unsigned long long int arr_24 [16] [16] ;
unsigned long long int arr_32 [16] [16] [16] [16] [16] ;
short arr_12 [22] ;
long long int arr_13 [22] ;
long long int arr_16 [23] [23] ;
int arr_17 [23] ;
unsigned int arr_18 [23] ;
unsigned short arr_25 [16] [16] ;
unsigned int arr_33 [16] [16] [16] ;
int arr_34 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 18205855117365544221ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)22288;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 2590567U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 4447274851373079188ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 2079395720U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = -1815644469;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = 8278717166889003744ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 5210619980964342230LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? 2101813645724143035ULL : 17753108362403851648ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 8707729760616716788ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-20731 : (short)25088;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -1814616500095244720LL : 2645616245851875579LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? -5328957723806703655LL : -5488133849175240739LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 2117029482 : 1877620332;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 922161880U : 688413316U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)10798 : (unsigned short)64935;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1408785603U : 206574020U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? 673214259 : 450227208;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
