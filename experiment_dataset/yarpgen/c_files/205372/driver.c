#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)7;
short var_2 = (short)-29355;
short var_3 = (short)18074;
short var_4 = (short)-19199;
signed char var_5 = (signed char)-89;
unsigned int var_6 = 1921317468U;
signed char var_7 = (signed char)26;
long long int var_8 = -7942627982527443420LL;
signed char var_10 = (signed char)65;
short var_11 = (short)-12841;
signed char var_12 = (signed char)115;
short var_14 = (short)31559;
long long int var_16 = -2226888187443655186LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 4326256040201685381LL;
int var_19 = 81199021;
int zero = 0;
short var_20 = (short)17997;
long long int var_21 = -6465107811822922482LL;
unsigned short var_22 = (unsigned short)16410;
unsigned int var_23 = 3391631582U;
long long int arr_0 [17] ;
unsigned int arr_1 [17] ;
unsigned char arr_2 [17] ;
unsigned int arr_3 [17] ;
signed char arr_7 [17] [17] ;
unsigned int arr_8 [17] [17] [17] ;
short arr_9 [17] [17] [17] [17] ;
unsigned short arr_4 [17] ;
signed char arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -4733490059540568170LL : 7546015262269202469LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2386789180U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1941037343U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 852102336U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)16224;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19766 : (unsigned short)60597;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)11 : (signed char)-7;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
