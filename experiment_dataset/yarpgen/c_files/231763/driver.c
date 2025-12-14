#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1968110089;
unsigned int var_2 = 3805967047U;
unsigned char var_3 = (unsigned char)115;
short var_4 = (short)16002;
int var_5 = 1204078793;
unsigned short var_6 = (unsigned short)54591;
int var_7 = -1557174683;
unsigned char var_9 = (unsigned char)54;
signed char var_13 = (signed char)-27;
unsigned short var_15 = (unsigned short)57477;
unsigned short var_16 = (unsigned short)15892;
short var_17 = (short)-11573;
long long int var_18 = 2238352712054629393LL;
int zero = 0;
unsigned int var_19 = 2051974773U;
long long int var_20 = -4138257823550866956LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)2;
unsigned int var_23 = 907697797U;
unsigned int var_24 = 233572338U;
_Bool var_25 = (_Bool)1;
int var_26 = 1702761803;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)69;
long long int var_29 = 2345701305527162513LL;
long long int var_30 = 8395506042686148518LL;
unsigned short arr_0 [17] ;
unsigned short arr_1 [17] ;
signed char arr_2 [19] ;
signed char arr_5 [10] [10] ;
unsigned char arr_6 [10] ;
long long int arr_8 [16] ;
signed char arr_9 [16] [16] ;
signed char arr_4 [19] ;
unsigned char arr_17 [10] [10] [10] [10] ;
unsigned short arr_18 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)35056;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)46114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)113 : (signed char)-34;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = -8229223777773548119LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-36 : (signed char)-5;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)167 : (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)24649 : (unsigned short)5220;
}

void checksum() {
    hash(&seed, var_19);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
