#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6224;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1737820744U;
unsigned char var_3 = (unsigned char)96;
unsigned char var_4 = (unsigned char)125;
unsigned int var_5 = 4241793092U;
long long int var_7 = -1775175447414421515LL;
long long int var_8 = -1188212045724380076LL;
unsigned short var_9 = (unsigned short)60861;
int zero = 0;
signed char var_10 = (signed char)-73;
signed char var_11 = (signed char)66;
int var_12 = -1820162414;
signed char var_13 = (signed char)-87;
long long int var_14 = -819998429027309394LL;
unsigned int var_15 = 2796560923U;
signed char var_16 = (signed char)-8;
unsigned short var_17 = (unsigned short)54755;
_Bool var_18 = (_Bool)0;
long long int var_19 = 3248129099920585220LL;
signed char var_20 = (signed char)70;
int arr_0 [19] [19] ;
unsigned long long int arr_1 [19] ;
unsigned long long int arr_3 [12] ;
unsigned int arr_4 [12] [12] ;
short arr_8 [12] ;
long long int arr_2 [19] ;
unsigned short arr_5 [12] [12] ;
unsigned int arr_6 [12] ;
unsigned char arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -907151513;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 6205645603526164486ULL : 12271576830179720015ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 12597177721679413872ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 4204397731U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (short)976;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2199829368941289166LL : 8853944495962677116LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)49792;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 71225211U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (unsigned char)117;
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
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
