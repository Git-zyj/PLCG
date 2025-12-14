#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4234784060U;
long long int var_1 = -3397260389078296108LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3619674799U;
int var_6 = 706321010;
unsigned int var_7 = 4276819157U;
short var_10 = (short)-7539;
unsigned int var_13 = 3405118273U;
unsigned char var_14 = (unsigned char)220;
unsigned short var_15 = (unsigned short)65034;
signed char var_16 = (signed char)-52;
signed char var_17 = (signed char)-21;
long long int var_18 = 8458429482524014151LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)45422;
unsigned short var_21 = (unsigned short)32999;
long long int var_22 = -1400160447440129594LL;
unsigned char var_23 = (unsigned char)159;
long long int var_24 = 4534008011029461519LL;
unsigned int var_25 = 1003319635U;
short var_26 = (short)8343;
_Bool var_27 = (_Bool)1;
int var_28 = -13724609;
unsigned int arr_3 [19] [19] ;
unsigned int arr_4 [10] [10] ;
unsigned char arr_5 [10] ;
unsigned long long int arr_7 [15] ;
long long int arr_11 [22] [22] ;
unsigned int arr_8 [15] [15] ;
unsigned short arr_9 [15] [15] ;
int arr_14 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 2957232230U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 384078551U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8051847042201384319ULL : 1943488608580428555ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 4395730877020937914LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 3579335393U : 2434845593U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)15012 : (unsigned short)43041;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = -1518367292;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
