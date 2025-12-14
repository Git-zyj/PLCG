#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13955601641412714583ULL;
signed char var_1 = (signed char)-32;
long long int var_2 = -790785756343027087LL;
int var_4 = -459537853;
long long int var_5 = -3901435364058250828LL;
short var_8 = (short)6197;
unsigned char var_9 = (unsigned char)57;
int var_10 = 1181082183;
int var_11 = -897887132;
unsigned short var_12 = (unsigned short)43175;
int zero = 0;
long long int var_13 = 3509714600634954097LL;
int var_14 = -1909887499;
long long int var_15 = -5281875013090076992LL;
long long int var_16 = -7050314851705132359LL;
unsigned int var_17 = 56382286U;
signed char var_18 = (signed char)-106;
short var_19 = (short)32636;
long long int var_20 = 1900057067579618436LL;
short var_21 = (short)15319;
unsigned short var_22 = (unsigned short)8767;
unsigned short var_23 = (unsigned short)15823;
unsigned short arr_0 [23] ;
long long int arr_1 [23] ;
_Bool arr_4 [15] ;
_Bool arr_5 [15] ;
short arr_8 [15] ;
signed char arr_9 [15] [15] ;
short arr_2 [23] ;
short arr_3 [23] ;
short arr_6 [15] ;
unsigned long long int arr_10 [15] [15] ;
short arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34857 : (unsigned short)33550;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4461781160573458276LL : -604036051137513741LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)31214;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)12844 : (short)-20903;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)10146 : (short)-2269;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)-8526;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = 14359365347149111437ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (short)25432;
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
