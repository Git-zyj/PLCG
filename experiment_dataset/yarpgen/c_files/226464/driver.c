#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3862572366267707844LL;
unsigned int var_3 = 1831905744U;
unsigned short var_5 = (unsigned short)42105;
short var_6 = (short)-13584;
unsigned char var_8 = (unsigned char)13;
unsigned short var_9 = (unsigned short)59967;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)16762;
int zero = 0;
long long int var_14 = 3084105812535069636LL;
int var_15 = -270460307;
unsigned int var_16 = 3193632763U;
unsigned int var_17 = 4165405848U;
long long int arr_1 [10] ;
unsigned char arr_2 [10] ;
unsigned short arr_4 [10] ;
signed char arr_5 [10] ;
unsigned long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -6245549447798600192LL : -3767029543951616481LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)61822;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-26 : (signed char)-126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2051027017759333060ULL : 15755705907115509753ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
