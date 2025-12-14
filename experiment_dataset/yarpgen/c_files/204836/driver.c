#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1134;
unsigned int var_1 = 3668504658U;
short var_2 = (short)4551;
unsigned long long int var_3 = 693421293695068214ULL;
short var_4 = (short)-12871;
unsigned short var_6 = (unsigned short)46365;
unsigned char var_7 = (unsigned char)185;
unsigned int var_8 = 3095289910U;
signed char var_9 = (signed char)60;
unsigned int var_10 = 3684969042U;
long long int var_11 = -2221211829797179957LL;
int var_12 = 1627992957;
int zero = 0;
int var_13 = -217440258;
int var_14 = -777644856;
unsigned char var_15 = (unsigned char)61;
int var_16 = -628478108;
_Bool arr_0 [25] ;
unsigned short arr_2 [25] ;
short arr_6 [25] ;
int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)20150;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)25369 : (short)-23244;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1904897741 : 1341463498;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
