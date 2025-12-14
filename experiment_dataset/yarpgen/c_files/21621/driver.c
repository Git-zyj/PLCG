#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40717;
unsigned short var_4 = (unsigned short)55862;
unsigned long long int var_5 = 3145147953956163892ULL;
short var_6 = (short)6305;
unsigned char var_7 = (unsigned char)196;
long long int var_8 = 7083329654359232847LL;
unsigned short var_9 = (unsigned short)47110;
unsigned int var_10 = 1270133827U;
unsigned short var_12 = (unsigned short)18358;
int zero = 0;
unsigned char var_13 = (unsigned char)123;
unsigned short var_14 = (unsigned short)28837;
int var_15 = -1075788353;
unsigned short var_16 = (unsigned short)60553;
long long int var_17 = 2467287619851505141LL;
unsigned short var_18 = (unsigned short)41295;
long long int arr_2 [22] ;
unsigned int arr_3 [22] ;
unsigned short arr_4 [22] [22] ;
unsigned long long int arr_13 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -1158382745755822531LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 94690287U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)6646;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 1321452265507880844ULL : 1339613296395185154ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
