#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2026;
unsigned short var_3 = (unsigned short)9666;
signed char var_4 = (signed char)16;
unsigned int var_6 = 3742445984U;
long long int var_8 = -5732662050758435077LL;
signed char var_9 = (signed char)-25;
int zero = 0;
long long int var_10 = 8550242962088850234LL;
unsigned int var_11 = 3167696191U;
signed char var_12 = (signed char)54;
signed char var_13 = (signed char)-79;
short var_14 = (short)-20573;
long long int var_15 = -3976816433924781954LL;
signed char var_16 = (signed char)-93;
short var_17 = (short)17609;
_Bool arr_0 [23] [23] ;
signed char arr_2 [22] ;
unsigned int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 827514923U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
