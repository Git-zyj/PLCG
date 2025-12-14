#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17241979790761233235ULL;
unsigned short var_1 = (unsigned short)2966;
unsigned short var_2 = (unsigned short)31830;
unsigned int var_3 = 2497608191U;
short var_5 = (short)-29022;
unsigned long long int var_8 = 10954412790190788066ULL;
unsigned int var_9 = 2530398506U;
short var_10 = (short)-9617;
unsigned int var_11 = 805309000U;
signed char var_12 = (signed char)45;
int zero = 0;
unsigned char var_13 = (unsigned char)140;
int var_14 = 178397321;
signed char var_15 = (signed char)-67;
unsigned int var_16 = 1632505803U;
unsigned int var_17 = 770170291U;
unsigned short var_18 = (unsigned short)41202;
unsigned int var_19 = 3138856211U;
signed char var_20 = (signed char)13;
short var_21 = (short)-29392;
long long int var_22 = -6402068099299896125LL;
long long int arr_0 [23] ;
unsigned char arr_3 [23] [23] ;
long long int arr_5 [23] [23] ;
unsigned long long int arr_6 [23] [23] ;
_Bool arr_7 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -2881122959957787823LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -7159248464208994491LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 17156359574835167513ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
