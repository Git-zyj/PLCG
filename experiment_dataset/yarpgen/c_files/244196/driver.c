#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
unsigned long long int var_5 = 15189334932454001943ULL;
signed char var_7 = (signed char)-85;
int zero = 0;
unsigned char var_12 = (unsigned char)17;
unsigned long long int var_13 = 8632492539817649047ULL;
unsigned short var_14 = (unsigned short)62569;
long long int var_15 = -3062146335347813212LL;
unsigned long long int var_16 = 10618858147441222331ULL;
unsigned long long int var_17 = 13320352255022937951ULL;
unsigned short var_18 = (unsigned short)21018;
unsigned long long int var_19 = 2507400469422669794ULL;
unsigned short var_20 = (unsigned short)48518;
unsigned short var_21 = (unsigned short)28189;
signed char var_22 = (signed char)-9;
unsigned long long int arr_1 [14] ;
unsigned short arr_2 [14] ;
long long int arr_4 [14] [14] [14] ;
unsigned short arr_7 [11] ;
signed char arr_10 [11] ;
signed char arr_32 [18] ;
signed char arr_6 [14] [14] [14] ;
int arr_11 [11] ;
long long int arr_20 [11] [11] [11] [11] ;
unsigned short arr_21 [11] [11] ;
unsigned long long int arr_25 [11] [11] [11] ;
unsigned long long int arr_29 [11] ;
signed char arr_30 [11] ;
signed char arr_35 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 3773561070807908932ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)43759;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -3221257586737851797LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned short)5115;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-76 : (signed char)-46;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 1293653344;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -3055871342972301797LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)4654;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 12356196585887511103ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_29 [i_0] = 4280137480259475382ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_30 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_35 [i_0] = (signed char)-38;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
