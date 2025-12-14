#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8213;
unsigned long long int var_1 = 17980188649520127181ULL;
int var_3 = -592423911;
_Bool var_4 = (_Bool)0;
long long int var_6 = -8249897924539018173LL;
unsigned char var_7 = (unsigned char)208;
unsigned char var_8 = (unsigned char)191;
signed char var_9 = (signed char)-107;
int var_10 = -1659606543;
unsigned short var_12 = (unsigned short)60178;
int zero = 0;
unsigned long long int var_14 = 8338290555711673048ULL;
unsigned char var_15 = (unsigned char)247;
_Bool var_16 = (_Bool)0;
long long int var_17 = -5703073806235084710LL;
unsigned char var_18 = (unsigned char)191;
int var_19 = 1447274830;
unsigned long long int var_20 = 832708483156026859ULL;
unsigned long long int var_21 = 11384751111309887706ULL;
int var_22 = -895659169;
int var_23 = -1583327492;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 580853856U;
int var_28 = 1534854601;
unsigned long long int arr_0 [21] ;
int arr_1 [21] [21] ;
_Bool arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3750583141627146743ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1477195016;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
