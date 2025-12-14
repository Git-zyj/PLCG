#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1391066233;
long long int var_1 = 1198758751948548615LL;
unsigned short var_3 = (unsigned short)13057;
unsigned int var_5 = 3630758119U;
short var_6 = (short)-11348;
int var_7 = 1219141310;
short var_8 = (short)-22206;
unsigned int var_11 = 3110302121U;
int zero = 0;
long long int var_19 = 5300829167205588760LL;
unsigned int var_20 = 1256829226U;
unsigned short var_21 = (unsigned short)52499;
unsigned long long int var_22 = 3214370438567224891ULL;
unsigned long long int var_23 = 12131744482599231627ULL;
unsigned int var_24 = 2090278399U;
int var_25 = 1270445750;
unsigned char arr_0 [11] ;
int arr_1 [11] ;
long long int arr_5 [13] ;
int arr_6 [13] ;
unsigned char arr_7 [13] [13] ;
int arr_8 [13] ;
int arr_3 [11] [11] ;
unsigned short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -363176994;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -6572898340012347053LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -1091869449;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = -120891064;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -1369726655;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)24255;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
