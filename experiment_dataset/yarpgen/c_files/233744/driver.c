#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2773834283657790605LL;
unsigned short var_3 = (unsigned short)38917;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3082827222U;
unsigned char var_8 = (unsigned char)202;
unsigned int var_9 = 4056065905U;
unsigned long long int var_10 = 2703712800109604247ULL;
unsigned int var_11 = 1053779129U;
unsigned long long int var_12 = 13166939213309061267ULL;
unsigned char var_14 = (unsigned char)194;
unsigned long long int var_15 = 11131897180089900332ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3442316716U;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)45084;
unsigned int var_21 = 3690584330U;
short var_22 = (short)-5384;
unsigned char var_23 = (unsigned char)23;
signed char arr_3 [10] [10] ;
unsigned int arr_4 [10] [10] [10] ;
int arr_6 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3209786540U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1958860769;
}

void checksum() {
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
