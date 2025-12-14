#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2489;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
signed char var_7 = (signed char)120;
long long int var_8 = -1564333395028480987LL;
unsigned short var_9 = (unsigned short)32957;
long long int var_10 = -3073611174034168916LL;
short var_11 = (short)31444;
unsigned long long int var_12 = 2444244092114095246ULL;
short var_13 = (short)6323;
unsigned char var_14 = (unsigned char)71;
long long int var_15 = 7480450135362852053LL;
int zero = 0;
unsigned short var_17 = (unsigned short)59575;
unsigned char var_18 = (unsigned char)96;
short var_19 = (short)-31026;
unsigned char var_20 = (unsigned char)199;
unsigned char var_21 = (unsigned char)140;
unsigned short var_22 = (unsigned short)38839;
unsigned short var_23 = (unsigned short)58867;
unsigned int arr_0 [10] ;
long long int arr_1 [10] [10] ;
unsigned char arr_2 [13] ;
int arr_3 [13] ;
unsigned char arr_4 [13] [13] [13] ;
unsigned char arr_5 [13] [13] ;
unsigned long long int arr_6 [13] [13] ;
unsigned char arr_7 [13] [13] [13] ;
signed char arr_8 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2956376443U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 931731031438687912LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -1125314145;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 5617549120702318817ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)108;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
