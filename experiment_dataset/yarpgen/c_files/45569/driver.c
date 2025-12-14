#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)3849;
unsigned char var_6 = (unsigned char)190;
int var_7 = 983952092;
short var_8 = (short)-20097;
unsigned short var_9 = (unsigned short)16561;
unsigned short var_10 = (unsigned short)57864;
long long int var_12 = 5220770101604492624LL;
unsigned char var_13 = (unsigned char)193;
unsigned char var_15 = (unsigned char)83;
int zero = 0;
short var_16 = (short)-30889;
unsigned char var_17 = (unsigned char)181;
unsigned int var_18 = 3856812311U;
signed char var_19 = (signed char)-90;
unsigned long long int var_20 = 1676228228357386290ULL;
unsigned short arr_6 [21] ;
_Bool arr_10 [21] ;
signed char arr_13 [13] ;
unsigned char arr_14 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)14430;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-15 : (signed char)67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)23 : (unsigned char)155;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
