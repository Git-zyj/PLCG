#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3318144080715658813ULL;
unsigned int var_1 = 229505818U;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)236;
unsigned long long int var_7 = 12708886673623794258ULL;
signed char var_8 = (signed char)104;
signed char var_11 = (signed char)-13;
int zero = 0;
unsigned int var_14 = 783570056U;
long long int var_15 = -200697057612632324LL;
unsigned char var_16 = (unsigned char)97;
long long int var_17 = 6521666515783876813LL;
signed char var_18 = (signed char)-32;
signed char var_19 = (signed char)-76;
unsigned long long int var_20 = 5493451553503907504ULL;
unsigned char var_21 = (unsigned char)68;
unsigned short var_22 = (unsigned short)28634;
unsigned long long int arr_1 [17] ;
unsigned char arr_5 [17] ;
unsigned char arr_7 [17] [17] ;
signed char arr_12 [17] [17] ;
long long int arr_13 [17] ;
signed char arr_19 [17] [17] [17] [17] ;
int arr_2 [17] [17] ;
unsigned long long int arr_3 [17] ;
unsigned char arr_4 [17] ;
unsigned short arr_11 [17] ;
int arr_15 [17] ;
int arr_16 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 6977990122816292426ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 972104729056426741LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -809118117;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 13953722414785437537ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30874 : (unsigned short)46718;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 945881286 : -1390558111;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -1388600654 : 1189864065;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
