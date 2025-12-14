#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1888617275083227203ULL;
signed char var_1 = (signed char)-23;
signed char var_2 = (signed char)-123;
signed char var_3 = (signed char)12;
unsigned long long int var_4 = 17992178372299455047ULL;
unsigned long long int var_5 = 6046890547854850207ULL;
signed char var_6 = (signed char)54;
unsigned int var_8 = 2631324399U;
unsigned int var_11 = 3266696854U;
unsigned int var_12 = 2365976398U;
unsigned char var_13 = (unsigned char)129;
unsigned long long int var_14 = 2118263063949134307ULL;
signed char var_15 = (signed char)80;
unsigned short var_16 = (unsigned short)20509;
unsigned char var_17 = (unsigned char)188;
unsigned long long int var_18 = 681270995151215782ULL;
unsigned char var_19 = (unsigned char)112;
int zero = 0;
unsigned char var_20 = (unsigned char)30;
unsigned long long int var_21 = 15837000439457531507ULL;
unsigned int var_22 = 3181098375U;
unsigned long long int var_23 = 13370738294413507837ULL;
unsigned short var_24 = (unsigned short)37106;
long long int var_25 = 620024847219461215LL;
unsigned long long int var_26 = 12297867935498895573ULL;
unsigned char var_27 = (unsigned char)228;
unsigned short var_28 = (unsigned short)20022;
short var_29 = (short)-23761;
unsigned char var_30 = (unsigned char)30;
signed char var_31 = (signed char)38;
signed char arr_1 [25] [25] ;
int arr_2 [25] [25] ;
int arr_5 [25] [25] ;
unsigned long long int arr_6 [25] ;
unsigned long long int arr_7 [25] [25] ;
int arr_11 [25] ;
unsigned long long int arr_14 [16] ;
unsigned long long int arr_20 [16] [16] ;
unsigned char arr_22 [16] ;
unsigned long long int arr_3 [25] ;
int arr_4 [25] ;
signed char arr_17 [16] [16] ;
unsigned char arr_18 [16] ;
signed char arr_23 [16] ;
unsigned int arr_24 [16] ;
signed char arr_25 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-31 : (signed char)-64;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -1107980784 : -1333505285;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -1892927102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 4952829742990267471ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 3378327843277823592ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 354716633;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 15642847481131309401ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 12833421973984446928ULL : 6101609040153549802ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3213619934881561492ULL : 12506747482681102772ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 366286289 : 1562358990;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (signed char)-62 : (signed char)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 2929865609U : 1122704637U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (signed char)-65 : (signed char)65;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
