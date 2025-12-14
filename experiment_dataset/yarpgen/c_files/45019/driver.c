#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5594047233030011526LL;
short var_1 = (short)-15109;
unsigned int var_2 = 3400064731U;
unsigned int var_3 = 247126756U;
unsigned char var_4 = (unsigned char)143;
unsigned int var_5 = 3422070671U;
unsigned int var_6 = 176749736U;
long long int var_8 = 8250053598265276206LL;
unsigned int var_9 = 2853705109U;
unsigned long long int var_11 = 8480067924230201469ULL;
unsigned long long int var_13 = 16328759993228921774ULL;
unsigned short var_14 = (unsigned short)38031;
unsigned int var_15 = 4125155672U;
long long int var_16 = -6847823269138854935LL;
signed char var_17 = (signed char)-103;
int zero = 0;
int var_19 = -1784053634;
int var_20 = 363211239;
unsigned int var_21 = 2346295810U;
_Bool var_22 = (_Bool)1;
long long int var_23 = 1707797043345892589LL;
unsigned char var_24 = (unsigned char)54;
int var_25 = -779161811;
int var_26 = -562382182;
signed char var_27 = (signed char)-102;
unsigned char var_28 = (unsigned char)33;
_Bool arr_0 [22] ;
signed char arr_1 [22] ;
unsigned char arr_2 [22] [22] ;
unsigned int arr_4 [19] [19] ;
unsigned long long int arr_6 [19] ;
short arr_3 [22] [22] ;
int arr_7 [19] [19] ;
signed char arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-35 : (signed char)-122;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 3521498639U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 12727872324952964805ULL : 15895482995815878875ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)5426 : (short)30620;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -1459386725 : 629834455;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)18 : (signed char)-41;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
