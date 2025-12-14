#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3182385649065823155ULL;
unsigned char var_3 = (unsigned char)235;
unsigned char var_4 = (unsigned char)161;
unsigned char var_5 = (unsigned char)27;
unsigned char var_6 = (unsigned char)152;
short var_7 = (short)16361;
unsigned char var_9 = (unsigned char)182;
unsigned char var_10 = (unsigned char)230;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)28035;
unsigned char var_13 = (unsigned char)223;
long long int var_14 = 8974916028360911768LL;
long long int var_15 = 7718583346839178820LL;
long long int var_16 = 3109692374483396592LL;
unsigned short var_17 = (unsigned short)48940;
signed char var_18 = (signed char)-119;
unsigned char var_19 = (unsigned char)234;
unsigned short var_20 = (unsigned short)50070;
unsigned char var_21 = (unsigned char)46;
unsigned long long int arr_0 [17] ;
unsigned char arr_1 [17] ;
_Bool arr_2 [17] ;
unsigned char arr_4 [17] ;
signed char arr_5 [17] ;
short arr_7 [17] [17] ;
unsigned short arr_8 [17] [17] ;
unsigned char arr_12 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 12084999775843858882ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-29163;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)37301;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)196;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
