#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2391517831U;
unsigned int var_1 = 1508390668U;
int var_2 = 366080418;
unsigned int var_3 = 1876343856U;
unsigned long long int var_5 = 14949335187541520266ULL;
unsigned short var_7 = (unsigned short)64391;
_Bool var_8 = (_Bool)0;
int var_10 = 1125721297;
int var_11 = 775871026;
unsigned int var_12 = 1312548993U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 4917524430612879904ULL;
long long int var_15 = 509920272786910180LL;
unsigned int var_16 = 2460342223U;
unsigned long long int var_17 = 11543851843173722274ULL;
unsigned char var_18 = (unsigned char)101;
unsigned char var_19 = (unsigned char)109;
int var_20 = 229110544;
unsigned long long int var_21 = 7682135087827784900ULL;
unsigned char var_22 = (unsigned char)77;
unsigned int var_23 = 4193585987U;
unsigned long long int arr_0 [15] ;
signed char arr_3 [15] [15] [15] ;
unsigned int arr_4 [15] [15] ;
unsigned short arr_5 [15] [15] [15] [15] ;
unsigned char arr_8 [15] ;
unsigned long long int arr_10 [15] [15] [15] [15] ;
unsigned char arr_13 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 13300553005943715ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 252144571U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)38876;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 8052289727256067882ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)211 : (unsigned char)132;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
