#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 13710424U;
unsigned int var_7 = 2058997879U;
long long int var_8 = -1782979980459322342LL;
int zero = 0;
signed char var_20 = (signed char)-2;
unsigned short var_21 = (unsigned short)23789;
unsigned short var_22 = (unsigned short)55492;
unsigned long long int var_23 = 14612804989407402851ULL;
unsigned long long int var_24 = 18114506786802693836ULL;
unsigned char var_25 = (unsigned char)21;
unsigned char var_26 = (unsigned char)225;
unsigned char var_27 = (unsigned char)69;
unsigned long long int var_28 = 6174090764775092826ULL;
unsigned long long int var_29 = 185037821967844963ULL;
unsigned long long int var_30 = 4378771338679854721ULL;
signed char var_31 = (signed char)15;
unsigned int var_32 = 3261915193U;
unsigned long long int var_33 = 10962251872384694447ULL;
long long int arr_0 [22] [22] ;
unsigned int arr_2 [22] [22] [22] ;
unsigned int arr_3 [22] ;
unsigned short arr_5 [22] [22] [22] ;
unsigned int arr_6 [22] [22] [22] ;
signed char arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 6542873143020682505LL : -3963567085095053949LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3691678508U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 890579927U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)2330 : (unsigned short)13360;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1371432414U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (signed char)105;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
