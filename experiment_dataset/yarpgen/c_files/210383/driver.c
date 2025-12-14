#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19426;
unsigned long long int var_2 = 5139848249453630845ULL;
int var_3 = 69821137;
unsigned int var_4 = 3118564416U;
unsigned char var_5 = (unsigned char)141;
long long int var_6 = 5006915844936751613LL;
long long int var_11 = -6042459328254299520LL;
unsigned char var_13 = (unsigned char)110;
short var_15 = (short)-22780;
unsigned long long int var_16 = 3381197533765026948ULL;
int zero = 0;
short var_17 = (short)-3988;
unsigned int var_18 = 1893785809U;
int var_19 = -819622090;
unsigned char var_20 = (unsigned char)100;
int var_21 = -544486139;
signed char var_22 = (signed char)66;
signed char var_23 = (signed char)-51;
long long int var_24 = 6901474121994884757LL;
unsigned short var_25 = (unsigned short)52192;
unsigned int var_26 = 2124520018U;
_Bool arr_2 [20] [20] ;
signed char arr_3 [20] [20] ;
short arr_4 [12] ;
unsigned short arr_6 [12] [12] ;
int arr_10 [12] [12] [12] ;
long long int arr_12 [12] [12] [12] [12] ;
short arr_18 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)27727;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)17472;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1911543732;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 377576213080851393LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)-32538;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
