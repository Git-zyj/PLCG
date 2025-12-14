#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3712017898U;
unsigned short var_1 = (unsigned short)62164;
unsigned char var_2 = (unsigned char)86;
unsigned short var_5 = (unsigned short)50092;
unsigned long long int var_6 = 17290251636300724001ULL;
int var_10 = -1244809239;
unsigned int var_11 = 790246437U;
unsigned short var_14 = (unsigned short)42671;
signed char var_17 = (signed char)-119;
int zero = 0;
short var_19 = (short)-31000;
signed char var_20 = (signed char)24;
int var_21 = -1007323850;
signed char var_22 = (signed char)-1;
long long int var_23 = -6698391101752995413LL;
unsigned int var_24 = 159062858U;
short var_25 = (short)27023;
unsigned short var_26 = (unsigned short)30517;
long long int var_27 = -902738153117152493LL;
unsigned int arr_0 [16] [16] ;
int arr_8 [13] [13] ;
unsigned short arr_10 [25] ;
signed char arr_11 [25] ;
unsigned long long int arr_12 [25] ;
signed char arr_14 [17] ;
unsigned long long int arr_15 [17] ;
signed char arr_16 [17] ;
signed char arr_17 [17] [17] [17] ;
int arr_20 [17] [17] ;
unsigned int arr_24 [17] [17] [17] ;
short arr_26 [17] [17] [17] ;
unsigned int arr_27 [17] [17] [17] [17] ;
int arr_2 [16] [16] ;
int arr_9 [13] ;
_Bool arr_13 [25] [25] ;
unsigned char arr_21 [17] ;
short arr_22 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 2053372588U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -289071571 : -662276585;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned short)33885;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 12100735860390746290ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = 17322572795679387674ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = 2137171493;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 3841160465U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (short)26366;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 225161216U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -835399717;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 853584949 : 295944384;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (short)-17196;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
