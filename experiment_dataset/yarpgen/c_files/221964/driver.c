#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
unsigned short var_1 = (unsigned short)38983;
unsigned long long int var_2 = 15022519445412457375ULL;
unsigned long long int var_3 = 2681539848809836938ULL;
unsigned long long int var_4 = 9049801830824158917ULL;
unsigned short var_5 = (unsigned short)54947;
signed char var_6 = (signed char)110;
unsigned short var_8 = (unsigned short)5053;
unsigned short var_12 = (unsigned short)44887;
unsigned char var_13 = (unsigned char)39;
int zero = 0;
unsigned char var_16 = (unsigned char)123;
unsigned short var_17 = (unsigned short)33484;
unsigned int var_18 = 2970542679U;
int var_19 = 34187461;
unsigned char var_20 = (unsigned char)230;
signed char var_21 = (signed char)-99;
unsigned long long int var_22 = 1074617253200733430ULL;
long long int var_23 = -8837206131863188983LL;
short var_24 = (short)-32254;
signed char arr_0 [21] ;
unsigned short arr_2 [21] ;
unsigned int arr_3 [21] [21] ;
signed char arr_4 [21] ;
int arr_5 [21] [21] [21] [21] ;
unsigned int arr_8 [24] ;
unsigned short arr_9 [24] ;
signed char arr_7 [21] [21] ;
unsigned short arr_10 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)39353;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 320235332U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2015099024;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 529123366U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)15619;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)37713;
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
