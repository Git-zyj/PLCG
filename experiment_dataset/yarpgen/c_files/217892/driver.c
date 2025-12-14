#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19706;
unsigned char var_1 = (unsigned char)133;
short var_2 = (short)23879;
unsigned char var_4 = (unsigned char)185;
unsigned long long int var_5 = 11324961618275120068ULL;
long long int var_7 = -8931075955806078763LL;
unsigned char var_10 = (unsigned char)40;
unsigned long long int var_11 = 11058561480145904145ULL;
long long int var_12 = 4205087376585685775LL;
unsigned long long int var_13 = 7274414916390490206ULL;
int zero = 0;
unsigned long long int var_14 = 8202708550552189708ULL;
unsigned long long int var_15 = 9490496405740928655ULL;
unsigned char var_16 = (unsigned char)151;
unsigned char var_17 = (unsigned char)101;
unsigned long long int var_18 = 16358564795156490922ULL;
unsigned char var_19 = (unsigned char)136;
unsigned long long int var_20 = 2647859593917286513ULL;
unsigned char var_21 = (unsigned char)81;
short var_22 = (short)6404;
unsigned long long int var_23 = 7040322685350731437ULL;
short var_24 = (short)-1129;
unsigned long long int arr_0 [11] ;
short arr_6 [12] [12] ;
unsigned char arr_7 [12] [12] ;
long long int arr_13 [21] [21] ;
short arr_14 [21] ;
unsigned long long int arr_15 [21] ;
short arr_16 [21] [21] ;
short arr_22 [21] [21] [21] [21] ;
unsigned long long int arr_5 [11] [11] ;
short arr_23 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 8753567039695208720ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-32321;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = -7728417624487203378LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (short)17333;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 8021558038455803576ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-5684;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (short)24632;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 12477871737262795011ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = (short)-21437;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
