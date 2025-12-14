#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
unsigned short var_3 = (unsigned short)26913;
int var_5 = -887026809;
long long int var_7 = 2692735702328122749LL;
int var_9 = -903502292;
int var_10 = -1989926896;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)19025;
unsigned char var_14 = (unsigned char)74;
unsigned char var_15 = (unsigned char)75;
unsigned char var_16 = (unsigned char)155;
unsigned int var_18 = 2655103098U;
unsigned char var_19 = (unsigned char)120;
int zero = 0;
long long int var_20 = 363773850278966300LL;
signed char var_21 = (signed char)-36;
signed char var_22 = (signed char)-118;
signed char var_23 = (signed char)111;
unsigned char var_24 = (unsigned char)114;
unsigned char var_25 = (unsigned char)16;
unsigned char var_26 = (unsigned char)43;
short arr_0 [16] ;
unsigned long long int arr_4 [16] [16] ;
unsigned short arr_5 [16] [16] ;
unsigned int arr_16 [12] [12] [12] [12] ;
unsigned char arr_6 [16] ;
short arr_7 [16] ;
long long int arr_22 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-6321;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 14470619620872595793ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)22207;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 4199304772U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)6785;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -7636360126202674344LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
