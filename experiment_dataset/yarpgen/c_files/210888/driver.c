#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11621501308238937772ULL;
unsigned char var_1 = (unsigned char)45;
unsigned char var_2 = (unsigned char)123;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)40;
long long int var_7 = 5987476766632273003LL;
unsigned long long int var_9 = 17337204645024237359ULL;
int var_10 = 897631990;
unsigned int var_11 = 266430341U;
unsigned long long int var_12 = 17147787437224657731ULL;
int zero = 0;
unsigned int var_13 = 844523182U;
int var_14 = 1104857356;
short var_15 = (short)11738;
unsigned short var_16 = (unsigned short)52586;
unsigned char var_17 = (unsigned char)47;
unsigned long long int arr_0 [11] [11] ;
unsigned long long int arr_1 [11] [11] ;
signed char arr_2 [11] ;
unsigned long long int arr_3 [11] [11] [11] ;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 10324426519112403848ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 12925915586551297300ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 15796867134033760019ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
