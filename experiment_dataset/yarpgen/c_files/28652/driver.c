#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2907127475U;
signed char var_2 = (signed char)20;
unsigned char var_3 = (unsigned char)83;
unsigned char var_4 = (unsigned char)85;
unsigned long long int var_5 = 304909620241787158ULL;
long long int var_6 = -7391304201359287615LL;
unsigned long long int var_7 = 6004952592211812043ULL;
unsigned int var_8 = 3908831414U;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-2802;
long long int var_13 = -5730358289200096879LL;
unsigned long long int var_16 = 12087577198592653431ULL;
int zero = 0;
int var_17 = -988938068;
int var_18 = 1782432096;
signed char var_19 = (signed char)71;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)34;
long long int var_22 = -4017713937092492552LL;
unsigned short var_23 = (unsigned short)18034;
short var_24 = (short)32381;
unsigned int var_25 = 1678328530U;
signed char var_26 = (signed char)-87;
unsigned short arr_0 [14] ;
unsigned short arr_2 [14] ;
short arr_3 [21] ;
unsigned char arr_4 [21] [21] ;
unsigned int arr_7 [21] [21] [21] ;
unsigned char arr_8 [21] [21] [21] ;
unsigned long long int arr_11 [21] [21] [21] [21] ;
long long int arr_13 [21] [21] [21] [21] [21] ;
unsigned short arr_14 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)22914;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)48103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)16338;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 821772362U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 8117536270298055609ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -8098326477008702520LL : 650462768717519754LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)503;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
