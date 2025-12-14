#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)154;
unsigned long long int var_5 = 10833682263229390584ULL;
long long int var_6 = 7608099113009424829LL;
unsigned int var_7 = 1158790907U;
short var_8 = (short)24166;
short var_9 = (short)22796;
_Bool var_10 = (_Bool)1;
long long int var_12 = 6898922840001188781LL;
int var_13 = -1324812887;
unsigned short var_16 = (unsigned short)5086;
long long int var_17 = 4607324389846170398LL;
short var_18 = (short)-29659;
int zero = 0;
signed char var_19 = (signed char)-22;
unsigned short var_20 = (unsigned short)14472;
unsigned long long int var_21 = 5610997464808049774ULL;
unsigned int var_22 = 2504930862U;
unsigned int var_23 = 1947422881U;
unsigned long long int var_24 = 11133543916583570487ULL;
unsigned int var_25 = 2391081814U;
unsigned int var_26 = 3601152232U;
signed char arr_0 [24] ;
int arr_1 [24] ;
unsigned char arr_2 [24] ;
int arr_3 [24] ;
_Bool arr_6 [10] ;
unsigned int arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -205431901;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1224446606 : 474475141;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 3663753380U;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
