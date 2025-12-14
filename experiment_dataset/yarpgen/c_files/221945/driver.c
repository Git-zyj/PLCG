#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1831777942558323097LL;
short var_2 = (short)20884;
unsigned short var_4 = (unsigned short)22461;
unsigned char var_5 = (unsigned char)161;
signed char var_8 = (signed char)-86;
signed char var_9 = (signed char)85;
unsigned char var_10 = (unsigned char)96;
short var_11 = (short)-30427;
long long int var_12 = -4977182737788958612LL;
int zero = 0;
unsigned char var_14 = (unsigned char)248;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)55597;
unsigned int var_17 = 531145614U;
short var_18 = (short)-22574;
short var_19 = (short)30587;
unsigned short var_20 = (unsigned short)35443;
unsigned int var_21 = 3493297549U;
unsigned int var_22 = 1518729487U;
unsigned short var_23 = (unsigned short)46975;
unsigned int var_24 = 3434894173U;
short var_25 = (short)6318;
short var_26 = (short)-15302;
signed char var_27 = (signed char)34;
unsigned char var_28 = (unsigned char)77;
unsigned long long int var_29 = 15319155200766004898ULL;
unsigned char var_30 = (unsigned char)164;
long long int arr_0 [18] ;
int arr_1 [18] ;
short arr_2 [18] [18] ;
short arr_4 [10] ;
short arr_5 [10] [10] ;
unsigned char arr_7 [10] [10] ;
unsigned int arr_9 [10] ;
unsigned long long int arr_12 [10] [10] [10] ;
unsigned int arr_13 [10] [10] [10] [10] ;
unsigned char arr_17 [10] [10] [10] [10] [10] [10] ;
unsigned char arr_19 [10] [10] [10] [10] [10] [10] [10] ;
unsigned char arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -569293052168762920LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 71399187;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)18335;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-14781;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (short)13618;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 926279453U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 12941201679023548040ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 2700965952U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned char)140;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
