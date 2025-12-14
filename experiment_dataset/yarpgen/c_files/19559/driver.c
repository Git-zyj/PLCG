#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1899916765;
short var_4 = (short)16158;
unsigned short var_6 = (unsigned short)45877;
unsigned int var_8 = 2155690736U;
unsigned long long int var_10 = 2457418227275106352ULL;
long long int var_11 = 2129734141604506504LL;
short var_13 = (short)-27235;
short var_14 = (short)-17230;
unsigned short var_15 = (unsigned short)61921;
unsigned long long int var_16 = 3016638512844987912ULL;
int zero = 0;
unsigned int var_17 = 1137143654U;
unsigned short var_18 = (unsigned short)52787;
int var_19 = 420338068;
long long int var_20 = 753809878609062010LL;
long long int var_21 = 5138049764685858770LL;
signed char var_22 = (signed char)-75;
unsigned long long int var_23 = 5159454327352620902ULL;
unsigned char var_24 = (unsigned char)81;
unsigned int arr_4 [20] ;
_Bool arr_6 [25] [25] ;
unsigned short arr_9 [25] [25] ;
short arr_11 [25] ;
_Bool arr_17 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 71146875U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)27927;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (short)27425;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
