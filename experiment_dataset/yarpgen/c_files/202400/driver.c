#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24246;
int var_1 = -1376651028;
unsigned short var_3 = (unsigned short)8741;
_Bool var_4 = (_Bool)0;
short var_5 = (short)32329;
short var_11 = (short)11182;
unsigned char var_13 = (unsigned char)160;
unsigned short var_15 = (unsigned short)20981;
unsigned short var_17 = (unsigned short)1450;
signed char var_18 = (signed char)-124;
int zero = 0;
unsigned int var_19 = 290559180U;
short var_20 = (short)30074;
unsigned int var_21 = 1579371887U;
signed char var_22 = (signed char)7;
unsigned char var_23 = (unsigned char)6;
int var_24 = -1073896308;
int var_25 = -461907708;
unsigned long long int arr_1 [22] ;
unsigned char arr_2 [22] [22] ;
unsigned long long int arr_4 [22] [22] ;
unsigned char arr_7 [22] [22] [22] ;
long long int arr_9 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 10698969746510768762ULL : 777284925333996542ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 15966130666885096434ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 2433610888976672986LL : 7038939140016658236LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
