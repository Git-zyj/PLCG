#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)42;
unsigned char var_1 = (unsigned char)22;
unsigned int var_2 = 4089116749U;
unsigned char var_5 = (unsigned char)13;
unsigned long long int var_7 = 5299475674537844043ULL;
unsigned long long int var_10 = 5229621762742315948ULL;
short var_11 = (short)-5692;
unsigned short var_12 = (unsigned short)57151;
unsigned long long int var_13 = 3931281249753380106ULL;
unsigned long long int var_14 = 10910473107593073271ULL;
int zero = 0;
unsigned long long int var_18 = 15614398073172150853ULL;
unsigned char var_19 = (unsigned char)193;
short var_20 = (short)17786;
unsigned char var_21 = (unsigned char)225;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
_Bool arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
unsigned char arr_2 [11] [11] ;
unsigned int arr_3 [11] ;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 151808881568600755ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2193702381U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
