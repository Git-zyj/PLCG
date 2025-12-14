#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1251977188;
unsigned short var_2 = (unsigned short)16911;
unsigned char var_3 = (unsigned char)187;
_Bool var_4 = (_Bool)0;
int var_5 = -450128838;
unsigned short var_7 = (unsigned short)41199;
unsigned char var_8 = (unsigned char)67;
unsigned short var_10 = (unsigned short)64783;
int var_11 = 1840212868;
int zero = 0;
unsigned char var_12 = (unsigned char)37;
unsigned int var_13 = 3952087698U;
int var_14 = -2141879331;
unsigned int var_15 = 618671473U;
unsigned int var_16 = 1979020225U;
unsigned short var_17 = (unsigned short)6006;
unsigned char var_18 = (unsigned char)141;
unsigned int var_19 = 3321034872U;
int var_20 = 2109506467;
unsigned int var_21 = 28983591U;
unsigned short var_22 = (unsigned short)15723;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 17103011381702602181ULL;
unsigned int var_25 = 649341911U;
int var_26 = 1471256836;
unsigned short var_27 = (unsigned short)18247;
unsigned short var_28 = (unsigned short)11617;
unsigned long long int var_29 = 11474705444433246777ULL;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)50;
unsigned int var_32 = 2167154759U;
_Bool var_33 = (_Bool)1;
unsigned long long int var_34 = 11204166222124660357ULL;
_Bool var_35 = (_Bool)0;
unsigned char var_36 = (unsigned char)101;
_Bool var_37 = (_Bool)0;
unsigned short arr_0 [11] [11] ;
unsigned char arr_1 [11] ;
unsigned short arr_3 [11] [11] [11] ;
unsigned int arr_4 [12] ;
unsigned short arr_5 [12] [12] ;
_Bool arr_6 [12] ;
_Bool arr_7 [12] [12] [12] ;
_Bool arr_8 [12] [12] ;
unsigned short arr_10 [12] [12] ;
unsigned char arr_11 [12] ;
unsigned char arr_12 [12] [12] [12] ;
unsigned short arr_14 [12] [12] [12] ;
int arr_16 [12] [12] [12] ;
unsigned long long int arr_17 [12] [12] [12] [12] ;
unsigned char arr_18 [12] [12] [12] [12] ;
unsigned int arr_20 [12] [12] ;
_Bool arr_22 [12] [12] [12] [12] [12] ;
unsigned short arr_25 [12] [12] [12] ;
unsigned short arr_27 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)26228;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)19414;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 3307036975U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)9398;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)10732;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)45155;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -65715387 : 85462006;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 16128997655314417733ULL : 1320641992978668405ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)180 : (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = 1529496565U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned short)1071;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned short)12252;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
