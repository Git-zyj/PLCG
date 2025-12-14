#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2146301949;
unsigned long long int var_1 = 11804234197991673956ULL;
unsigned long long int var_2 = 8171239293332297096ULL;
unsigned short var_3 = (unsigned short)31335;
long long int var_4 = 8696162764268776003LL;
long long int var_6 = 7487737426923458106LL;
unsigned short var_7 = (unsigned short)48361;
unsigned int var_9 = 1020765213U;
unsigned char var_10 = (unsigned char)75;
int zero = 0;
unsigned int var_13 = 1284591307U;
unsigned short var_14 = (unsigned short)3730;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-6660;
int var_17 = 1678151147;
unsigned short var_18 = (unsigned short)21203;
unsigned short var_19 = (unsigned short)25963;
unsigned short var_20 = (unsigned short)9959;
int var_21 = -562073846;
unsigned char var_22 = (unsigned char)219;
unsigned int var_23 = 857870974U;
unsigned short var_24 = (unsigned short)32476;
unsigned char var_25 = (unsigned char)193;
unsigned long long int var_26 = 3862650992596973661ULL;
unsigned int var_27 = 2389672774U;
int arr_0 [13] ;
unsigned short arr_2 [13] ;
_Bool arr_10 [13] [13] [13] ;
int arr_12 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -124814866;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31921 : (unsigned short)3691;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1760315977;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
