#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5816;
int var_1 = 168603996;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)14688;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)176;
unsigned short var_8 = (unsigned short)30021;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 16541985562795511663ULL;
unsigned long long int var_11 = 7254112635799500131ULL;
unsigned char var_12 = (unsigned char)59;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2575109124U;
unsigned short var_15 = (unsigned short)50489;
unsigned long long int var_16 = 6337099426357669243ULL;
short var_17 = (short)-31502;
unsigned int var_18 = 3491488307U;
_Bool var_19 = (_Bool)0;
int var_20 = -159468669;
unsigned int var_21 = 696347874U;
int var_22 = -587017326;
unsigned char var_23 = (unsigned char)194;
unsigned int var_24 = 3562736713U;
unsigned char arr_0 [20] ;
unsigned long long int arr_1 [20] [20] ;
short arr_5 [18] ;
int arr_7 [18] ;
int arr_9 [21] ;
unsigned char arr_10 [21] ;
unsigned int arr_13 [21] ;
_Bool arr_17 [21] [21] [21] ;
_Bool arr_18 [21] [21] [21] ;
unsigned short arr_21 [21] [21] [21] ;
unsigned char arr_3 [20] ;
unsigned long long int arr_4 [20] [20] ;
unsigned long long int arr_8 [18] ;
int arr_11 [21] ;
unsigned char arr_19 [21] ;
unsigned long long int arr_20 [21] ;
unsigned long long int arr_23 [21] ;
int arr_24 [21] [21] ;
_Bool arr_27 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 4482361854275334105ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)24849;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -476321725;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = -1669729687;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 2091993812U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned short)47490;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 1519993286748867129ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 13667445153904454581ULL : 13689177314598948292ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 312922894;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = 17711523801212576651ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = 11341260720327884452ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_24 [i_0] [i_1] = -1558269116;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (_Bool)0;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
