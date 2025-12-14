#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44420;
unsigned short var_5 = (unsigned short)47832;
unsigned short var_6 = (unsigned short)51845;
short var_7 = (short)-15428;
unsigned short var_8 = (unsigned short)21240;
unsigned short var_11 = (unsigned short)284;
int zero = 0;
unsigned char var_13 = (unsigned char)240;
unsigned short var_14 = (unsigned short)5012;
short var_15 = (short)18448;
unsigned char var_16 = (unsigned char)196;
unsigned char var_17 = (unsigned char)121;
unsigned long long int var_18 = 11911652855652181998ULL;
unsigned long long int var_19 = 7847240698023602097ULL;
unsigned char var_20 = (unsigned char)183;
unsigned long long int var_21 = 1022571376680283738ULL;
short var_22 = (short)-3826;
unsigned char var_23 = (unsigned char)71;
unsigned long long int var_24 = 13172974163516348376ULL;
unsigned char var_25 = (unsigned char)236;
short var_26 = (short)-422;
unsigned long long int var_27 = 3878481877227136788ULL;
short var_28 = (short)-25102;
unsigned short var_29 = (unsigned short)51119;
short var_30 = (short)-26797;
unsigned char arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned char arr_7 [21] [21] [21] ;
short arr_9 [11] [11] ;
unsigned long long int arr_8 [21] [21] ;
short arr_11 [11] ;
unsigned char arr_14 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 8714884818405083333ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (short)29981;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 4566353026767887151ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (short)16176;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)62;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
