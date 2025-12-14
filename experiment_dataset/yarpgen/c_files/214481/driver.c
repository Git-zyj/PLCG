#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3169930885160397349ULL;
unsigned int var_1 = 2290442998U;
unsigned short var_2 = (unsigned short)32712;
unsigned long long int var_3 = 5006740183012548261ULL;
long long int var_4 = -1523301232621879177LL;
_Bool var_5 = (_Bool)1;
int var_6 = 1165049427;
_Bool var_7 = (_Bool)0;
int var_8 = -693626923;
unsigned short var_9 = (unsigned short)61817;
unsigned char var_10 = (unsigned char)151;
short var_11 = (short)-18905;
int zero = 0;
unsigned int var_12 = 3208734749U;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-28961;
unsigned char var_15 = (unsigned char)212;
unsigned int var_16 = 380064031U;
unsigned long long int var_17 = 5118192561095954697ULL;
long long int var_18 = -4702331072207061616LL;
unsigned char var_19 = (unsigned char)186;
unsigned char var_20 = (unsigned char)93;
unsigned long long int var_21 = 16619916816609556252ULL;
unsigned int arr_3 [13] ;
_Bool arr_8 [22] [22] ;
int arr_19 [18] [18] [18] [18] ;
unsigned short arr_20 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4076609522U : 2087972326U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -391313652 : -1946042430;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)30709 : (unsigned short)15323;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
