#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)254;
signed char var_2 = (signed char)65;
short var_3 = (short)-5351;
unsigned char var_4 = (unsigned char)155;
int var_5 = 1234175971;
unsigned char var_6 = (unsigned char)145;
unsigned char var_9 = (unsigned char)36;
signed char var_10 = (signed char)-116;
_Bool var_11 = (_Bool)0;
short var_12 = (short)15993;
long long int var_13 = -7462513864519289407LL;
unsigned char var_14 = (unsigned char)158;
unsigned short var_15 = (unsigned short)4822;
short var_16 = (short)-13438;
int zero = 0;
unsigned long long int var_17 = 1867845083727768128ULL;
int var_18 = 255151497;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)184;
unsigned char var_21 = (unsigned char)251;
unsigned int var_22 = 3072352449U;
unsigned short var_23 = (unsigned short)45429;
unsigned short var_24 = (unsigned short)9027;
unsigned short var_25 = (unsigned short)33342;
short var_26 = (short)29156;
signed char var_27 = (signed char)-106;
unsigned int arr_0 [12] ;
unsigned long long int arr_2 [12] ;
unsigned long long int arr_3 [12] ;
long long int arr_6 [12] ;
unsigned int arr_7 [12] [12] [12] ;
_Bool arr_9 [12] [12] ;
_Bool arr_10 [12] [12] [12] ;
unsigned long long int arr_13 [12] ;
signed char arr_16 [12] ;
signed char arr_35 [12] [12] [12] [12] ;
_Bool arr_4 [12] ;
signed char arr_8 [12] [12] ;
int arr_22 [12] [12] ;
unsigned int arr_29 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 498503001U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 6481129846699171321ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 5193146412867006390ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 1719843424033507790LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3919806635U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 11892785128441444921ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)14 : (signed char)117;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? -1559759009 : -1711480230;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1960252302U : 837250586U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
