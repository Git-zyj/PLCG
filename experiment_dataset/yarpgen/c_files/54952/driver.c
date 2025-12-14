#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-48;
int var_2 = 152065766;
unsigned int var_3 = 3086916052U;
unsigned char var_4 = (unsigned char)9;
unsigned int var_5 = 598739089U;
unsigned long long int var_6 = 2395300023588864158ULL;
unsigned long long int var_8 = 16002716645645976993ULL;
int var_9 = 485429134;
int var_10 = -1333177675;
unsigned char var_11 = (unsigned char)155;
signed char var_12 = (signed char)-18;
int var_13 = 1818959659;
int zero = 0;
unsigned char var_14 = (unsigned char)112;
unsigned short var_15 = (unsigned short)24560;
short var_16 = (short)-27561;
signed char var_17 = (signed char)61;
signed char var_18 = (signed char)5;
unsigned int var_19 = 3618526275U;
short var_20 = (short)30680;
signed char var_21 = (signed char)-94;
unsigned long long int var_22 = 448546967647265140ULL;
int var_23 = 1003847508;
long long int var_24 = 2531774768960873725LL;
unsigned char var_25 = (unsigned char)45;
unsigned long long int var_26 = 2296857937035113481ULL;
unsigned char var_27 = (unsigned char)103;
long long int var_28 = 8877673126234000769LL;
int var_29 = -681722358;
unsigned long long int var_30 = 11200582357852612700ULL;
short var_31 = (short)22350;
_Bool var_32 = (_Bool)0;
unsigned long long int var_33 = 761198235853142146ULL;
short var_34 = (short)17115;
unsigned int var_35 = 865216512U;
signed char arr_0 [21] ;
unsigned int arr_2 [21] ;
_Bool arr_3 [22] ;
unsigned char arr_4 [22] ;
_Bool arr_5 [22] ;
_Bool arr_9 [22] [22] [22] ;
signed char arr_10 [22] ;
unsigned char arr_17 [25] ;
signed char arr_19 [25] ;
short arr_23 [25] ;
signed char arr_25 [25] [25] ;
long long int arr_27 [25] [25] ;
unsigned char arr_7 [22] ;
unsigned int arr_8 [22] [22] ;
unsigned short arr_11 [22] ;
unsigned long long int arr_12 [22] ;
unsigned int arr_16 [22] [22] ;
long long int arr_20 [25] [25] ;
unsigned long long int arr_21 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1123731670U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (short)-28612;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_27 [i_0] [i_1] = 8654510319696952341LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 471575816U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned short)25743;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 16945637729702818786ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = 3090482819U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = 1023588311371562284LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 11501752466771513866ULL;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
