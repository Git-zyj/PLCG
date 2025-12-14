#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
int var_2 = -594880037;
signed char var_3 = (signed char)-89;
unsigned char var_6 = (unsigned char)104;
unsigned short var_9 = (unsigned short)31455;
unsigned int var_10 = 388136367U;
short var_11 = (short)-5431;
short var_12 = (short)6051;
int zero = 0;
unsigned char var_13 = (unsigned char)248;
unsigned short var_14 = (unsigned short)13378;
short var_15 = (short)31799;
unsigned int var_16 = 3584422790U;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-96;
signed char var_19 = (signed char)123;
signed char var_20 = (signed char)-77;
long long int var_21 = 2139168552167721364LL;
int var_22 = 782714196;
_Bool arr_1 [10] ;
unsigned int arr_2 [10] ;
long long int arr_7 [15] ;
long long int arr_8 [15] ;
short arr_10 [22] ;
unsigned int arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2957327442U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 287497130030988280LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 8495117767252025910LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)2102;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 2994945880U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
