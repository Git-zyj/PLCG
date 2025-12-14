#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-31295;
unsigned short var_2 = (unsigned short)47317;
unsigned char var_3 = (unsigned char)17;
unsigned long long int var_4 = 12087950204302235758ULL;
int var_5 = 1062030657;
unsigned int var_6 = 1348659310U;
unsigned short var_7 = (unsigned short)47221;
unsigned short var_8 = (unsigned short)13718;
signed char var_9 = (signed char)116;
unsigned long long int var_10 = 13259005013205734638ULL;
short var_12 = (short)5419;
short var_13 = (short)23303;
unsigned short var_14 = (unsigned short)42931;
signed char var_15 = (signed char)-68;
_Bool var_16 = (_Bool)0;
short var_17 = (short)27596;
int zero = 0;
unsigned short var_18 = (unsigned short)24113;
unsigned long long int var_19 = 16393648845638878522ULL;
unsigned long long int var_20 = 9918073147776530797ULL;
unsigned int var_21 = 2258543844U;
long long int var_22 = -7537122043836504953LL;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 3597654887U;
unsigned int var_25 = 3009600533U;
short var_26 = (short)-1395;
int var_27 = -834802005;
unsigned short var_28 = (unsigned short)3511;
short arr_0 [12] ;
unsigned short arr_5 [20] ;
signed char arr_6 [20] ;
short arr_7 [12] ;
long long int arr_8 [12] ;
_Bool arr_2 [12] ;
unsigned short arr_3 [12] ;
unsigned long long int arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)31645;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)16624;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)21571;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 7034325653361570410LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)43405;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 6071703011070158138ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
