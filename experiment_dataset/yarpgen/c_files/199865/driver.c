#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2904;
unsigned int var_2 = 4150838448U;
long long int var_3 = 2640839955476697865LL;
signed char var_4 = (signed char)37;
signed char var_6 = (signed char)(-127 - 1);
int var_7 = 1298598608;
unsigned char var_8 = (unsigned char)158;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)-2538;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-2;
int var_15 = -1011493673;
signed char var_16 = (signed char)-124;
long long int var_17 = 7513615738375783959LL;
unsigned long long int var_18 = 13600676075319600592ULL;
unsigned char var_19 = (unsigned char)76;
int var_20 = 505162267;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-67;
short arr_0 [21] ;
long long int arr_1 [21] ;
short arr_7 [23] ;
int arr_8 [23] [23] [23] ;
long long int arr_12 [23] [23] [23] [23] ;
signed char arr_15 [23] [23] [23] [23] [23] ;
long long int arr_18 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-32391;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 6725399277328838581LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)-1987;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -979641429;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -208633026779743719LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -469140558260566549LL : 9018986807193370491LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
