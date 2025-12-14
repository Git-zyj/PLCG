#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8536592584828986578LL;
short var_5 = (short)-833;
int var_6 = -1960236387;
signed char var_9 = (signed char)-91;
unsigned short var_10 = (unsigned short)50561;
unsigned short var_12 = (unsigned short)55431;
int zero = 0;
unsigned short var_13 = (unsigned short)12438;
unsigned char var_14 = (unsigned char)117;
signed char var_15 = (signed char)45;
signed char var_16 = (signed char)-21;
long long int var_17 = 3852437496415414330LL;
long long int var_18 = -4110458496534604737LL;
short var_19 = (short)6133;
unsigned short var_20 = (unsigned short)32814;
int var_21 = -1570517538;
unsigned long long int var_22 = 9428339027845647287ULL;
short var_23 = (short)-7735;
signed char var_24 = (signed char)7;
signed char var_25 = (signed char)-99;
signed char var_26 = (signed char)41;
long long int var_27 = -2860479345601255829LL;
signed char arr_0 [24] ;
unsigned long long int arr_2 [24] [24] ;
long long int arr_3 [24] [24] [24] ;
signed char arr_4 [24] [24] [24] ;
long long int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 17789809701798170554ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4515563059566420107LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -432653715623951333LL : -345718464052864260LL;
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
