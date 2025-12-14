#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 12412341284190397969ULL;
unsigned short var_7 = (unsigned short)21957;
unsigned int var_10 = 624463351U;
short var_11 = (short)-16572;
unsigned int var_12 = 1323605231U;
int var_14 = -986669617;
short var_15 = (short)-18539;
short var_16 = (short)-27522;
int var_17 = -835379095;
unsigned long long int var_18 = 9727552908226960155ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)43288;
unsigned long long int var_20 = 304394448009928877ULL;
short var_21 = (short)22146;
unsigned char var_22 = (unsigned char)238;
unsigned short var_23 = (unsigned short)4238;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
long long int var_26 = 6820581458665331029LL;
unsigned char var_27 = (unsigned char)0;
unsigned char var_28 = (unsigned char)41;
int arr_0 [13] ;
unsigned short arr_3 [13] ;
unsigned short arr_5 [13] [13] [13] ;
long long int arr_14 [13] [13] [13] [13] [13] ;
_Bool arr_9 [13] ;
unsigned int arr_10 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1707915630;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)1277;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)23844;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 4859389171302073230LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 329632063U : 3515849550U;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
