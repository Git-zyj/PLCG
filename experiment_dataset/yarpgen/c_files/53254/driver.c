#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13812;
int var_1 = -1965685171;
long long int var_2 = 1233293384941594289LL;
unsigned int var_3 = 1142157815U;
int var_6 = 682807870;
signed char var_8 = (signed char)-31;
unsigned char var_10 = (unsigned char)122;
int zero = 0;
unsigned char var_12 = (unsigned char)251;
signed char var_13 = (signed char)-113;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)92;
signed char var_16 = (signed char)90;
unsigned char var_17 = (unsigned char)114;
unsigned long long int var_18 = 4963007819696889285ULL;
signed char var_19 = (signed char)-68;
unsigned char arr_0 [15] ;
int arr_1 [15] ;
_Bool arr_2 [15] ;
unsigned int arr_3 [15] ;
int arr_5 [24] ;
int arr_6 [24] ;
unsigned long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -639826110;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 583249270U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -1112209582;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 552727941;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 583633878745576026ULL : 1533466955061695420ULL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
