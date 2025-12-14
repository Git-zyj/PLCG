#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18640;
int var_1 = 1081290;
short var_2 = (short)17205;
long long int var_3 = -1399983259275336719LL;
signed char var_4 = (signed char)127;
signed char var_5 = (signed char)105;
unsigned long long int var_6 = 13975518492803289324ULL;
unsigned long long int var_7 = 15549190269503653072ULL;
signed char var_8 = (signed char)-123;
int var_9 = -51274206;
short var_10 = (short)23039;
long long int var_11 = 6736735196991772396LL;
unsigned short var_12 = (unsigned short)25805;
int zero = 0;
int var_13 = -1210057707;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 12817447373286858026ULL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
_Bool arr_0 [22] ;
unsigned long long int arr_2 [22] ;
long long int arr_3 [22] ;
long long int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 16442788398243664423ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -3195591911641805005LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 2685387010981537680LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
