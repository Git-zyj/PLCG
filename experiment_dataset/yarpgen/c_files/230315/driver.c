#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1575798346;
int var_1 = 1903137327;
int var_2 = 1006794287;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 510017904U;
unsigned char var_5 = (unsigned char)29;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)56;
unsigned char var_10 = (unsigned char)4;
signed char var_11 = (signed char)-32;
unsigned char var_12 = (unsigned char)61;
signed char var_14 = (signed char)94;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3325174124U;
int zero = 0;
short var_17 = (short)-7981;
unsigned short var_18 = (unsigned short)25390;
unsigned char var_19 = (unsigned char)34;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3003685261U;
unsigned short var_22 = (unsigned short)14011;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)180;
unsigned char var_25 = (unsigned char)114;
int var_26 = -703005081;
long long int var_27 = 1301761999575110034LL;
unsigned int var_28 = 3389963822U;
unsigned short arr_0 [21] [21] ;
int arr_1 [21] [21] ;
signed char arr_2 [21] [21] [21] ;
int arr_3 [21] [21] [21] ;
unsigned long long int arr_7 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)16629;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -2112850389;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -312503328;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 3705832867685009073ULL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
