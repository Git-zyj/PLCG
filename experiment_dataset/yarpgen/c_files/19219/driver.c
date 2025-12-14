#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11921422475281111740ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)25388;
unsigned long long int var_7 = 1155271947713288204ULL;
int zero = 0;
unsigned long long int var_10 = 11275956273574143923ULL;
unsigned char var_11 = (unsigned char)46;
unsigned short var_12 = (unsigned short)12004;
short var_13 = (short)12230;
unsigned short var_14 = (unsigned short)30652;
int var_15 = -1872268985;
unsigned char var_16 = (unsigned char)37;
signed char var_17 = (signed char)-58;
int var_18 = -632049724;
unsigned int var_19 = 2307986569U;
unsigned char arr_0 [12] ;
long long int arr_1 [12] ;
short arr_3 [12] [12] ;
int arr_7 [12] [12] [12] [12] [12] ;
unsigned long long int arr_8 [12] [12] [12] [12] ;
long long int arr_13 [12] [12] [12] [12] [12] ;
unsigned short arr_16 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 6631605491556992638LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)14783;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 1736969347;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 15573232463804418925ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -6804843626768726635LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned short)17650;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
