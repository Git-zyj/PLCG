#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1646613060340371319ULL;
unsigned long long int var_4 = 10738376355519005036ULL;
long long int var_6 = 874885050061498257LL;
unsigned long long int var_7 = 4698679180657427406ULL;
unsigned int var_9 = 1159089798U;
unsigned short var_12 = (unsigned short)64331;
int zero = 0;
int var_14 = -820599986;
unsigned long long int var_15 = 12039488828061196485ULL;
unsigned short var_16 = (unsigned short)52007;
int var_17 = -571006818;
unsigned long long int var_18 = 683699115673543517ULL;
unsigned short var_19 = (unsigned short)231;
int var_20 = -623223811;
unsigned int var_21 = 578832060U;
unsigned short var_22 = (unsigned short)46665;
unsigned long long int var_23 = 9313009894515346789ULL;
unsigned short arr_0 [11] ;
long long int arr_1 [11] ;
int arr_2 [11] ;
short arr_4 [24] ;
int arr_6 [24] ;
unsigned short arr_7 [24] ;
short arr_8 [24] [24] [24] ;
unsigned int arr_9 [24] [24] ;
unsigned long long int arr_10 [24] ;
unsigned int arr_11 [24] [24] ;
unsigned long long int arr_12 [24] [24] [24] [24] ;
unsigned char arr_14 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_16 [24] [24] [24] [24] ;
unsigned short arr_3 [11] ;
unsigned char arr_17 [24] [24] [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)36826;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 8011120109306498395LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1790934852;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-2681;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -1884187244;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)44512;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-15823;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 1891478597U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 8261288160152527915ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 2727021676U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2927518743227186100ULL : 9047629041960415012ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)251 : (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)36965;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (unsigned char)158 : (unsigned char)67;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
