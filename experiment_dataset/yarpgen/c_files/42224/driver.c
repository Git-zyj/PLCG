#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)65;
unsigned short var_4 = (unsigned short)57283;
unsigned char var_5 = (unsigned char)123;
signed char var_6 = (signed char)(-127 - 1);
long long int var_7 = -414573702221532410LL;
unsigned int var_8 = 953456643U;
short var_11 = (short)3519;
unsigned short var_13 = (unsigned short)40338;
short var_14 = (short)15745;
int zero = 0;
long long int var_18 = -3783309146023667899LL;
unsigned short var_19 = (unsigned short)2936;
unsigned long long int var_20 = 10892339655559892998ULL;
unsigned long long int var_21 = 10289140269510083772ULL;
unsigned short var_22 = (unsigned short)48622;
unsigned char var_23 = (unsigned char)135;
long long int var_24 = 5373029292697507270LL;
unsigned long long int var_25 = 11674014297137336858ULL;
unsigned short var_26 = (unsigned short)25325;
unsigned int var_27 = 2817736536U;
int arr_0 [21] [21] ;
unsigned long long int arr_3 [21] ;
int arr_4 [21] ;
unsigned short arr_6 [21] [21] [21] ;
unsigned short arr_7 [21] [21] [21] [21] ;
long long int arr_9 [21] [21] ;
unsigned long long int arr_10 [11] ;
unsigned int arr_11 [11] ;
unsigned int arr_22 [11] [11] [11] [11] [11] ;
unsigned long long int arr_2 [21] ;
long long int arr_14 [11] [11] [11] ;
unsigned short arr_19 [11] [11] [11] ;
long long int arr_24 [11] ;
short arr_25 [11] ;
unsigned short arr_28 [11] ;
unsigned long long int arr_29 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 328712282;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 13940589762936297397ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -374711753;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)52941;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)8962 : (unsigned short)59060;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? -4632126918484291917LL : -3222201521764902975LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 2731516648799210635ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 172585858U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 3844115477U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 8381398187460602844ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 520329806399279605LL : -3063129384484230186LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)20924 : (unsigned short)5387;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? -2287372991662628731LL : 8923078883043963137LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (short)8528 : (short)20098;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = (unsigned short)16594;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = 14344829174989864418ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
