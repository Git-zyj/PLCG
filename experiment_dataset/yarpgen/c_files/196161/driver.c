#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1126517626;
unsigned short var_1 = (unsigned short)65229;
short var_2 = (short)-6955;
unsigned short var_3 = (unsigned short)5680;
unsigned char var_4 = (unsigned char)34;
unsigned short var_5 = (unsigned short)47671;
unsigned char var_6 = (unsigned char)117;
unsigned long long int var_7 = 13650315219229118147ULL;
int var_8 = -1864914092;
short var_9 = (short)-8484;
signed char var_10 = (signed char)-116;
unsigned short var_11 = (unsigned short)53631;
int zero = 0;
short var_12 = (short)-20428;
unsigned short var_13 = (unsigned short)1769;
long long int var_14 = -8418074774734586033LL;
unsigned long long int var_15 = 3728739131707335139ULL;
int var_16 = -1589385993;
short var_17 = (short)21862;
unsigned short var_18 = (unsigned short)14453;
short var_19 = (short)-15328;
unsigned short var_20 = (unsigned short)59891;
unsigned short var_21 = (unsigned short)24010;
unsigned short var_22 = (unsigned short)22304;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-10447;
short var_25 = (short)-31991;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 83622929179638475ULL;
long long int var_28 = -8687153083633872169LL;
long long int arr_9 [19] [19] [19] ;
unsigned long long int arr_12 [13] ;
unsigned char arr_13 [13] [13] ;
unsigned char arr_29 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -6189302967363627420LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 838338055630409144ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)141;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
