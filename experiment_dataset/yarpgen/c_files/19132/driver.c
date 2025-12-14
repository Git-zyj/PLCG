#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1677573973926181197LL;
short var_1 = (short)10833;
long long int var_2 = 2456810275428124391LL;
unsigned long long int var_3 = 885190323428693967ULL;
int var_7 = -348214874;
_Bool var_8 = (_Bool)0;
long long int var_10 = 1178293082153885269LL;
short var_12 = (short)29407;
unsigned short var_13 = (unsigned short)41418;
int zero = 0;
int var_14 = -1153691530;
signed char var_15 = (signed char)101;
long long int var_16 = -7860738799886948444LL;
unsigned char var_17 = (unsigned char)167;
signed char var_18 = (signed char)72;
long long int var_19 = -6847925669555243908LL;
long long int var_20 = 7447647434928157313LL;
long long int var_21 = -5864506499686108790LL;
signed char var_22 = (signed char)88;
signed char arr_1 [11] [11] ;
unsigned char arr_7 [11] [11] [11] [11] ;
signed char arr_11 [21] ;
unsigned char arr_12 [21] ;
unsigned long long int arr_10 [11] [11] ;
unsigned int arr_13 [21] ;
unsigned long long int arr_14 [21] ;
long long int arr_15 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 12955583206747450908ULL : 3697743819431503999ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1555389558U : 1874173329U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 17108499954931391494ULL : 8739167151976896196ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 7911037786504125097LL : 3491509669559980643LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
