#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2265;
unsigned char var_3 = (unsigned char)167;
unsigned char var_4 = (unsigned char)44;
unsigned char var_5 = (unsigned char)226;
int var_9 = -222000117;
int var_10 = 1000190371;
unsigned char var_11 = (unsigned char)68;
unsigned long long int var_15 = 1409971389519881197ULL;
int zero = 0;
int var_18 = -22067013;
unsigned long long int var_19 = 9390571578279211427ULL;
unsigned char var_20 = (unsigned char)115;
unsigned short var_21 = (unsigned short)8164;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 10048785304017978042ULL;
int var_24 = -817221809;
int arr_0 [22] ;
unsigned long long int arr_1 [22] ;
unsigned char arr_2 [10] ;
unsigned char arr_5 [10] [10] ;
unsigned char arr_7 [10] [10] [10] ;
long long int arr_8 [10] [10] [10] [10] ;
unsigned char arr_9 [10] [10] [10] ;
long long int arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -2000267959;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 10300814090606050977ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4278123867004567784LL : 345010064226432008LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = -690947696631351911LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
