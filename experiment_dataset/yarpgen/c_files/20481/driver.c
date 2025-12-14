#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10092024497627773495ULL;
_Bool var_1 = (_Bool)1;
unsigned short var_6 = (unsigned short)65033;
int var_8 = -1759518939;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)40;
unsigned long long int var_13 = 8398954190471964528ULL;
signed char var_16 = (signed char)-40;
int var_17 = -562756262;
int zero = 0;
unsigned int var_18 = 3248062711U;
int var_19 = 1008651445;
unsigned char var_20 = (unsigned char)211;
unsigned int var_21 = 2342861013U;
unsigned long long int var_22 = 11925581898384953209ULL;
_Bool var_23 = (_Bool)1;
unsigned long long int arr_0 [22] [22] ;
long long int arr_1 [22] [22] ;
signed char arr_2 [22] ;
short arr_3 [22] [22] ;
int arr_6 [22] [22] [22] [22] ;
unsigned char arr_7 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 13071812344185161580ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 7072995508338539966LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)10094;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1842024295 : 163718031;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)97;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
