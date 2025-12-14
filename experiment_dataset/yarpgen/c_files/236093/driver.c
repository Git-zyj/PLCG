#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9231;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 2013121266754422349ULL;
unsigned char var_6 = (unsigned char)19;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)50411;
int var_11 = -1824069592;
int var_13 = 734065957;
unsigned int var_14 = 2596326557U;
signed char var_15 = (signed char)-103;
unsigned long long int var_16 = 16286852743006391618ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)223;
unsigned int var_21 = 3640419612U;
int var_22 = 1466923837;
unsigned long long int var_23 = 12859273761489131407ULL;
int var_24 = 648449378;
unsigned char var_25 = (unsigned char)217;
unsigned long long int var_26 = 14854398188862239977ULL;
unsigned char var_27 = (unsigned char)119;
unsigned char var_28 = (unsigned char)238;
unsigned int arr_8 [11] ;
int arr_11 [21] ;
unsigned short arr_12 [21] [21] ;
short arr_17 [12] [12] ;
unsigned long long int arr_24 [12] [12] ;
signed char arr_25 [12] ;
unsigned short arr_26 [12] ;
unsigned char arr_30 [11] ;
unsigned long long int arr_36 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 485063238U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -2076894409 : 333857382;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)43724 : (unsigned short)45528;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-6487;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 2881530911168660109ULL : 11571392925859564631ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = (unsigned short)61132;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_30 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7098078489482915430ULL : 11388326006843067483ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_36 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
