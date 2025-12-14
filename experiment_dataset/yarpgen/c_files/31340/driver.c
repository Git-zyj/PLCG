#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1075030090;
unsigned long long int var_1 = 3258811201214712486ULL;
int var_3 = 547603112;
unsigned int var_4 = 2866926074U;
unsigned long long int var_6 = 6398608397731578359ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)8947;
unsigned long long int var_10 = 16203010258578680654ULL;
int zero = 0;
signed char var_11 = (signed char)89;
short var_12 = (short)17309;
signed char var_13 = (signed char)67;
unsigned int var_14 = 3074075084U;
unsigned int var_15 = 2399934222U;
signed char var_16 = (signed char)90;
int var_17 = -856365195;
signed char var_18 = (signed char)66;
signed char var_19 = (signed char)61;
unsigned long long int var_20 = 3404760437553162314ULL;
unsigned short var_21 = (unsigned short)43831;
unsigned long long int var_22 = 18088518795984441659ULL;
unsigned int var_23 = 1465587524U;
short var_24 = (short)-11789;
_Bool var_25 = (_Bool)1;
int var_26 = -34454051;
unsigned short arr_0 [25] [25] ;
unsigned short arr_1 [25] ;
long long int arr_2 [25] ;
short arr_5 [25] [25] ;
int arr_6 [25] ;
unsigned char arr_7 [25] [25] ;
_Bool arr_13 [20] [20] ;
unsigned long long int arr_14 [20] ;
short arr_16 [20] [20] [20] ;
unsigned long long int arr_17 [20] [20] ;
long long int arr_28 [20] ;
int arr_3 [25] ;
unsigned short arr_4 [25] ;
long long int arr_12 [19] ;
unsigned long long int arr_21 [20] [20] [20] ;
short arr_22 [20] ;
unsigned short arr_26 [20] [20] ;
signed char arr_30 [20] ;
int arr_31 [20] [20] ;
long long int arr_32 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)24586;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)6269;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -4186507649135311926LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-29620;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -1860927951;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = 13608722778621181350ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)23983;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = 1323267477920472158ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = 2515261027509303513LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -127728850;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)13918;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 231068614348093238LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 9989714190952777258ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (short)7911;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned short)50560;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_31 [i_0] [i_1] = -245228545;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = 3989836472254803350LL;
}

void checksum() {
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
