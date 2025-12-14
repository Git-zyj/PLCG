#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8302436235096687485LL;
int var_1 = 1682394791;
signed char var_2 = (signed char)-112;
unsigned short var_3 = (unsigned short)62278;
unsigned char var_4 = (unsigned char)213;
unsigned char var_5 = (unsigned char)213;
signed char var_6 = (signed char)-39;
long long int var_7 = -1475760015122779192LL;
long long int var_8 = 676643837777020341LL;
int zero = 0;
int var_11 = 1838565233;
unsigned int var_12 = 1540850140U;
long long int var_13 = 4759669272322537705LL;
long long int var_14 = 5171441836413919677LL;
signed char var_15 = (signed char)-78;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3902285960U;
unsigned char arr_0 [17] ;
unsigned long long int arr_1 [17] [17] ;
unsigned char arr_5 [25] [25] ;
unsigned int arr_10 [20] [20] ;
signed char arr_11 [20] ;
long long int arr_12 [20] ;
unsigned char arr_2 [17] ;
int arr_3 [17] [17] ;
int arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 8972319534493759237ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 3817494055U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = -8880435980198811460LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = -1128653766;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -800216233 : 586443046;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
