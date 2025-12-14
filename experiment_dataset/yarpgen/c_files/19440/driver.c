#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12591410698972738262ULL;
long long int var_13 = 4126501046405855080LL;
signed char var_17 = (signed char)26;
int zero = 0;
unsigned char var_20 = (unsigned char)242;
int var_21 = -973576591;
signed char var_22 = (signed char)97;
unsigned char var_23 = (unsigned char)144;
int var_24 = -247192238;
int var_25 = 1194383956;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)19;
unsigned char var_28 = (unsigned char)152;
_Bool var_29 = (_Bool)1;
int var_30 = 299201462;
int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
unsigned char arr_5 [11] ;
unsigned long long int arr_8 [11] [11] [11] [11] [11] ;
unsigned char arr_9 [11] [11] [11] [11] ;
unsigned int arr_11 [11] [11] ;
long long int arr_16 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1161572423;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1613861387254909671ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 12566766101097363910ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = 3079786766U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = -2311847159628465340LL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
