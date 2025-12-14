#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62791;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)9;
unsigned char var_3 = (unsigned char)87;
unsigned long long int var_4 = 12382761709348313150ULL;
unsigned char var_5 = (unsigned char)96;
int var_6 = -967077864;
long long int var_7 = -6181516078445207805LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)20817;
short var_10 = (short)-9020;
short var_11 = (short)-28772;
signed char var_12 = (signed char)22;
short var_13 = (short)-8332;
int zero = 0;
int var_14 = -220597352;
long long int var_15 = -4074678137629874741LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)239;
unsigned long long int var_18 = 12334203751155105842ULL;
int var_19 = 954981228;
unsigned long long int var_20 = 8588780210637332925ULL;
unsigned char var_21 = (unsigned char)5;
long long int var_22 = 172521552567649071LL;
long long int arr_2 [21] [21] ;
signed char arr_6 [21] [21] ;
signed char arr_9 [22] ;
_Bool arr_10 [22] ;
unsigned int arr_20 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -2438613684977743903LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)97 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 1202228019U : 1224789414U;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
