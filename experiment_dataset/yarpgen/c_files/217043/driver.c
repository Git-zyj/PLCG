#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1054327582465234983LL;
unsigned long long int var_1 = 16046243207618216331ULL;
long long int var_2 = 4100457774511360084LL;
unsigned int var_3 = 678350497U;
long long int var_5 = 3753566320342004006LL;
short var_6 = (short)-22733;
short var_8 = (short)15700;
unsigned char var_10 = (unsigned char)56;
_Bool var_11 = (_Bool)0;
long long int var_15 = -6047357652755049330LL;
int zero = 0;
long long int var_18 = 4355250113949331840LL;
unsigned char var_19 = (unsigned char)179;
long long int var_20 = 8912594634113920992LL;
long long int var_21 = 5818084793381541630LL;
long long int var_22 = -2571211959315461724LL;
unsigned int var_23 = 2558092594U;
long long int var_24 = 2873061905338385168LL;
unsigned short var_25 = (unsigned short)22902;
unsigned char var_26 = (unsigned char)61;
long long int var_27 = -7776829431068717620LL;
unsigned long long int var_28 = 13191626968308867831ULL;
signed char var_29 = (signed char)-54;
unsigned char var_30 = (unsigned char)188;
long long int var_31 = 5322604159826148186LL;
long long int var_32 = -179279668395409010LL;
long long int var_33 = -5461201060108378613LL;
unsigned char var_34 = (unsigned char)42;
unsigned char var_35 = (unsigned char)172;
short var_36 = (short)5198;
unsigned long long int var_37 = 1050358545985354345ULL;
short var_38 = (short)6673;
long long int var_39 = -1643965375630598938LL;
short var_40 = (short)16049;
unsigned int var_41 = 370006434U;
signed char var_42 = (signed char)-28;
long long int var_43 = -6230467940116329052LL;
unsigned short var_44 = (unsigned short)63338;
unsigned short var_45 = (unsigned short)47484;
short var_46 = (short)-11116;
long long int arr_0 [11] ;
long long int arr_4 [11] [11] ;
int arr_7 [11] [11] [11] [11] ;
_Bool arr_9 [11] [11] [11] ;
unsigned int arr_11 [11] [11] [11] ;
int arr_12 [11] [11] [11] [11] ;
int arr_15 [11] ;
long long int arr_26 [16] [16] ;
signed char arr_27 [16] [16] ;
unsigned short arr_29 [16] [16] [16] ;
int arr_36 [16] [16] [16] [16] ;
int arr_40 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -5732089472762031629LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 8381703207816562376LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1440488938 : -1139118542;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3254662526U : 3207229792U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 337010754;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = -1004053106;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_26 [i_0] [i_1] = 6081589704081402901LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_27 [i_0] [i_1] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)49676 : (unsigned short)19653;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 81369787;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = 2140059470;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
