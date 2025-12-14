#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7790286368449838056ULL;
signed char var_1 = (signed char)41;
short var_5 = (short)-15014;
unsigned short var_6 = (unsigned short)47743;
signed char var_7 = (signed char)-78;
signed char var_8 = (signed char)-49;
unsigned char var_9 = (unsigned char)187;
long long int var_10 = 2411462942987685222LL;
int var_11 = 10235664;
unsigned int var_12 = 151261596U;
int zero = 0;
unsigned long long int var_13 = 6436365037854856153ULL;
long long int var_14 = -1952357591730678217LL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)12;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)46;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 4605680102839460224ULL;
_Bool var_22 = (_Bool)0;
_Bool arr_1 [16] [16] ;
int arr_2 [16] [16] [16] ;
unsigned short arr_3 [16] ;
_Bool arr_6 [16] [16] ;
long long int arr_8 [16] [16] [16] [16] ;
unsigned char arr_9 [16] ;
unsigned long long int arr_11 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -133397050;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)35509;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -7426181122215986253LL : -2224037286069223954LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 7827112214750427626ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
