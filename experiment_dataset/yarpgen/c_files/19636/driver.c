#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)4;
short var_3 = (short)6197;
unsigned int var_4 = 2793634660U;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-123;
unsigned int var_8 = 3228554089U;
short var_10 = (short)2730;
short var_12 = (short)16652;
int zero = 0;
unsigned long long int var_15 = 1210613418175834284ULL;
unsigned long long int var_16 = 4451296582313956960ULL;
unsigned int var_17 = 3487678233U;
signed char var_18 = (signed char)-127;
short var_19 = (short)830;
short var_20 = (short)23058;
unsigned char var_21 = (unsigned char)38;
unsigned int var_22 = 3588532563U;
short var_23 = (short)-12053;
unsigned short var_24 = (unsigned short)20356;
unsigned int var_25 = 1020657365U;
unsigned int arr_0 [20] ;
_Bool arr_1 [20] [20] ;
unsigned long long int arr_2 [20] ;
short arr_3 [20] [20] ;
short arr_4 [20] ;
unsigned char arr_10 [17] [17] ;
unsigned long long int arr_12 [17] ;
unsigned int arr_13 [17] ;
long long int arr_17 [17] [17] [17] [17] ;
signed char arr_20 [17] [17] [17] [17] [17] ;
_Bool arr_6 [20] ;
unsigned int arr_7 [20] ;
unsigned char arr_15 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 4202190948U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 11224951670374509968ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-4203;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)-12423;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 7038193744346336216ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 1869196493U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5664419653876768840LL : -165909910698255518LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-6 : (signed char)-32;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 1450226032U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)179;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
