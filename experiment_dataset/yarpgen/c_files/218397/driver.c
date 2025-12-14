#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)225;
int var_4 = -388084641;
unsigned char var_5 = (unsigned char)202;
unsigned long long int var_6 = 6580484878837742854ULL;
unsigned char var_7 = (unsigned char)115;
unsigned char var_9 = (unsigned char)126;
unsigned char var_10 = (unsigned char)200;
unsigned char var_12 = (unsigned char)43;
unsigned long long int var_13 = 10146579018110999134ULL;
unsigned short var_14 = (unsigned short)7404;
long long int var_16 = -6862958974471476762LL;
int var_17 = -731457258;
int var_18 = -661946467;
int zero = 0;
int var_19 = -308065395;
int var_20 = -617117112;
int var_21 = -1161531239;
unsigned short var_22 = (unsigned short)39740;
unsigned long long int var_23 = 13707974588674368502ULL;
long long int arr_0 [12] ;
int arr_1 [12] ;
int arr_2 [12] [12] ;
unsigned short arr_5 [19] [19] ;
int arr_3 [12] [12] ;
unsigned long long int arr_9 [19] [19] ;
unsigned char arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2957049292584209162LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -318522750;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1900876241 : -1984577395;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)61957;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -1859949093 : -1179236427;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 8005962939189851006ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned char)135;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
