#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1372512768;
unsigned short var_3 = (unsigned short)53933;
short var_7 = (short)-20926;
short var_8 = (short)10978;
unsigned long long int var_9 = 13540673814062105949ULL;
signed char var_10 = (signed char)84;
unsigned int var_11 = 2136480042U;
unsigned short var_13 = (unsigned short)34653;
signed char var_14 = (signed char)5;
unsigned char var_15 = (unsigned char)211;
int zero = 0;
signed char var_17 = (signed char)-47;
signed char var_18 = (signed char)-88;
short var_19 = (short)16381;
unsigned short var_20 = (unsigned short)35294;
int var_21 = 518341827;
unsigned int var_22 = 2349331895U;
unsigned short var_23 = (unsigned short)13727;
unsigned int var_24 = 2696912932U;
signed char var_25 = (signed char)-44;
signed char var_26 = (signed char)8;
long long int arr_0 [15] ;
short arr_1 [15] ;
unsigned int arr_2 [15] ;
unsigned short arr_7 [25] ;
unsigned long long int arr_3 [15] ;
signed char arr_18 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -8803943853337464400LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-23976;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3406722490U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16546 : (unsigned short)35641;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 9949099293943122908ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)102 : (signed char)80;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
