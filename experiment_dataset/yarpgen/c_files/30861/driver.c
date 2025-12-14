#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 104078227;
unsigned long long int var_1 = 16409165247513215963ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2672729480U;
long long int var_4 = -9066543610787951562LL;
unsigned short var_5 = (unsigned short)11379;
short var_6 = (short)20296;
unsigned short var_7 = (unsigned short)51713;
unsigned long long int var_8 = 4758652579375996ULL;
int var_9 = -1709008279;
int var_10 = -74967992;
int var_11 = -457291523;
unsigned short var_12 = (unsigned short)28403;
unsigned short var_13 = (unsigned short)9789;
unsigned int var_14 = 2457459074U;
unsigned short var_15 = (unsigned short)5721;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)-14940;
unsigned short var_18 = (unsigned short)45317;
unsigned int var_19 = 2308139436U;
signed char var_20 = (signed char)97;
unsigned short var_21 = (unsigned short)23344;
short var_22 = (short)12167;
unsigned int var_23 = 2731070552U;
short var_24 = (short)11311;
int var_25 = -1443757009;
unsigned short var_26 = (unsigned short)39060;
unsigned int var_27 = 1243213478U;
unsigned short arr_0 [11] ;
unsigned char arr_1 [11] ;
signed char arr_2 [15] [15] ;
long long int arr_3 [15] ;
unsigned long long int arr_5 [15] ;
signed char arr_12 [12] [12] [12] ;
unsigned short arr_18 [12] [12] [12] ;
int arr_6 [15] ;
long long int arr_7 [15] ;
unsigned char arr_22 [12] [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)63476;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -7735211836609439991LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 3500575444175632314ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)65110;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 799051583;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 792959774085784855LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (unsigned char)159 : (unsigned char)18;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
