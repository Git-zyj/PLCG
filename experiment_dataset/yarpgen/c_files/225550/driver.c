#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 148695640U;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 2896824368063823009ULL;
unsigned long long int var_5 = 9701693785282179733ULL;
unsigned char var_7 = (unsigned char)140;
int var_8 = 875288013;
unsigned long long int var_9 = 2783406557148397136ULL;
unsigned long long int var_10 = 2805426995980556445ULL;
int zero = 0;
signed char var_12 = (signed char)36;
unsigned char var_13 = (unsigned char)148;
int var_14 = -932420390;
long long int var_15 = 4163321396533778198LL;
int var_16 = 356205315;
unsigned short var_17 = (unsigned short)32855;
unsigned char var_18 = (unsigned char)227;
long long int arr_0 [13] ;
signed char arr_1 [13] [13] ;
signed char arr_2 [13] ;
unsigned int arr_3 [13] ;
unsigned long long int arr_4 [13] [13] ;
unsigned int arr_6 [13] [13] [13] [13] ;
signed char arr_8 [13] [13] [13] [13] ;
unsigned long long int arr_10 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -2707341686849620531LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2054494264U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 11297189110682351251ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1606640497U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7532760259717187388ULL : 8100936474741353385ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
