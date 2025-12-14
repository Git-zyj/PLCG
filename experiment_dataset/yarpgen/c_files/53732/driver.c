#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -412754951;
unsigned char var_2 = (unsigned char)158;
unsigned char var_3 = (unsigned char)66;
short var_4 = (short)17817;
signed char var_5 = (signed char)22;
int var_6 = 264731669;
unsigned char var_7 = (unsigned char)27;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1600543744U;
unsigned char var_10 = (unsigned char)109;
int zero = 0;
unsigned long long int var_11 = 16979669303225219044ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)92;
long long int var_14 = 1817295739826463676LL;
unsigned char var_15 = (unsigned char)150;
unsigned int arr_1 [16] ;
signed char arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 489682105U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-42 : (signed char)-73;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
