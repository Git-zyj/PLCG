#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7183869764374207229LL;
short var_2 = (short)10508;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)40;
long long int var_7 = 5705409751215461287LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 14077230795225881266ULL;
unsigned long long int var_11 = 5317195758794684719ULL;
unsigned char var_12 = (unsigned char)201;
unsigned long long int var_13 = 4281751780956097510ULL;
int zero = 0;
int var_14 = 426168878;
signed char var_15 = (signed char)-117;
long long int var_16 = 8469358034086704825LL;
unsigned int var_17 = 2362379447U;
long long int var_18 = -1659572154934186597LL;
unsigned int var_19 = 3614297552U;
_Bool arr_0 [23] [23] ;
int arr_2 [23] [23] ;
signed char arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -1003591935;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)94;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
