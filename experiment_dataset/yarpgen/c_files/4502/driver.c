#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1885271729;
long long int var_2 = 9177031014958062236LL;
long long int var_3 = -5274672107431283507LL;
short var_5 = (short)10469;
short var_6 = (short)4515;
int var_8 = -1175822428;
long long int var_10 = 5922425994622200157LL;
unsigned int var_12 = 1522608500U;
unsigned char var_13 = (unsigned char)141;
short var_14 = (short)-27920;
short var_16 = (short)32258;
int var_17 = -1301764393;
unsigned int var_18 = 2475605423U;
int zero = 0;
unsigned int var_19 = 3955128140U;
unsigned char var_20 = (unsigned char)29;
unsigned int var_21 = 3370699811U;
long long int var_22 = -3615424422451217086LL;
long long int var_23 = 2393794418316090323LL;
long long int var_24 = -8611660989020167346LL;
unsigned char var_25 = (unsigned char)198;
short var_26 = (short)23088;
long long int arr_0 [12] ;
int arr_1 [12] ;
unsigned char arr_6 [17] ;
long long int arr_8 [17] ;
long long int arr_11 [17] [17] [17] ;
unsigned char arr_12 [17] [17] [17] [17] ;
unsigned int arr_13 [17] [17] [17] ;
short arr_14 [17] [17] ;
int arr_16 [14] ;
long long int arr_3 [12] [12] ;
int arr_4 [12] ;
unsigned int arr_10 [17] ;
unsigned int arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 5068855044627950745LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -1625370266;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -830545761127369928LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -4940024359815501186LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)80 : (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1425015202U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-17768;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = -1107811147;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 4009360783295033637LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1851471070;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1626109213U : 2148859969U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = 3610918353U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
