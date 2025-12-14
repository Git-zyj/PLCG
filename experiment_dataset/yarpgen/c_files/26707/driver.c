#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)35;
signed char var_2 = (signed char)0;
unsigned short var_4 = (unsigned short)9448;
unsigned long long int var_5 = 8312805578083693707ULL;
signed char var_6 = (signed char)7;
signed char var_7 = (signed char)27;
signed char var_8 = (signed char)15;
short var_9 = (short)21860;
int zero = 0;
signed char var_10 = (signed char)66;
unsigned long long int var_11 = 11183167728231215493ULL;
long long int var_12 = -1991758170668122629LL;
signed char var_13 = (signed char)-94;
short var_14 = (short)28043;
short var_15 = (short)-4357;
signed char var_16 = (signed char)-109;
long long int var_17 = -7113943279242726693LL;
long long int var_18 = -6518703997380327976LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6023227005713892534LL;
long long int var_21 = -4314354733149336736LL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)117;
int var_24 = -989828077;
unsigned short var_25 = (unsigned short)13893;
signed char var_26 = (signed char)-50;
unsigned long long int var_27 = 3969970502953536587ULL;
unsigned int arr_0 [19] ;
short arr_1 [19] [19] ;
signed char arr_2 [19] ;
signed char arr_3 [19] [19] ;
unsigned short arr_5 [19] [19] ;
unsigned char arr_6 [19] [19] ;
signed char arr_7 [19] [19] ;
unsigned int arr_15 [19] ;
unsigned short arr_19 [16] [16] ;
unsigned int arr_20 [16] [16] ;
unsigned long long int arr_24 [16] [16] ;
signed char arr_4 [19] [19] ;
signed char arr_11 [19] [19] [19] ;
unsigned char arr_12 [19] [19] ;
short arr_13 [19] [19] ;
short arr_16 [19] [19] ;
unsigned long long int arr_17 [19] ;
signed char arr_21 [16] [16] ;
int arr_22 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1276966802U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-5510;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-103 : (signed char)-92;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-14 : (signed char)-41;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)63125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 2114742503U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)55081 : (unsigned short)13170;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 431076957U : 1692258827U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = 10422819911619265139ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)34 : (signed char)-90;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (short)14435;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (short)25110;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 7789772268749902731ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)38 : (signed char)-80;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? -264121743 : -1436195521;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
