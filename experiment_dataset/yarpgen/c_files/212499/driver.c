#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1883986035;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)2055;
short var_4 = (short)31683;
unsigned char var_5 = (unsigned char)93;
unsigned long long int var_6 = 11131181317417685305ULL;
unsigned long long int var_7 = 12041218112294057490ULL;
unsigned int var_8 = 4091307704U;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-17856;
unsigned char var_13 = (unsigned char)142;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-21323;
int zero = 0;
unsigned char var_19 = (unsigned char)42;
long long int var_20 = 4317097986251726841LL;
signed char var_21 = (signed char)-115;
unsigned int var_22 = 1154121633U;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-34;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
unsigned short arr_3 [10] ;
signed char arr_4 [10] [10] ;
_Bool arr_5 [10] [10] [10] ;
unsigned int arr_10 [19] ;
signed char arr_6 [10] [10] ;
unsigned char arr_11 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56245 : (unsigned short)1235;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 493053464U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-124 : (signed char)2;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)54;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
