#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
unsigned int var_1 = 614582941U;
unsigned int var_3 = 556186969U;
short var_4 = (short)-4416;
long long int var_8 = -107481121985796092LL;
unsigned short var_9 = (unsigned short)42357;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
short var_15 = (short)-10556;
unsigned char var_18 = (unsigned char)83;
int var_19 = -1579653553;
int zero = 0;
unsigned long long int var_20 = 5125742875208814095ULL;
int var_21 = -563940809;
unsigned short var_22 = (unsigned short)26736;
unsigned short var_23 = (unsigned short)62334;
signed char var_24 = (signed char)54;
unsigned char var_25 = (unsigned char)49;
_Bool arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
int arr_3 [15] [15] ;
unsigned short arr_4 [15] ;
unsigned char arr_2 [17] [17] ;
short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)59912;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -167358782 : 443186287;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)45338;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-27037 : (short)31730;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
