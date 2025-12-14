#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned char var_2 = (unsigned char)109;
unsigned long long int var_4 = 12604359340266491131ULL;
int var_5 = -1161248296;
long long int var_6 = -3421285410223623421LL;
unsigned char var_7 = (unsigned char)9;
unsigned char var_8 = (unsigned char)190;
unsigned int var_14 = 4075572390U;
short var_15 = (short)3672;
signed char var_17 = (signed char)-8;
long long int var_18 = 7048591966516418724LL;
int zero = 0;
int var_19 = -88827625;
signed char var_20 = (signed char)126;
signed char var_21 = (signed char)-121;
int var_22 = -180942836;
long long int var_23 = 7800308318498629695LL;
signed char var_24 = (signed char)-41;
unsigned long long int arr_0 [11] ;
long long int arr_1 [11] ;
unsigned int arr_2 [11] [11] ;
signed char arr_3 [11] [11] ;
signed char arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 11070683653809988376ULL : 6049009724737357670ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -3024522439145471367LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 2044636363U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-93 : (signed char)-53;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-110 : (signed char)4;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
