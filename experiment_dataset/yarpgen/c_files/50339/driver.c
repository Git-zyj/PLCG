#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12837;
signed char var_1 = (signed char)-16;
unsigned short var_10 = (unsigned short)26863;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 14729662528280120869ULL;
unsigned long long int var_18 = 824143492197122375ULL;
int var_19 = 1004969935;
signed char var_20 = (signed char)116;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-101;
signed char var_23 = (signed char)-118;
long long int var_24 = 5038423892004296288LL;
long long int var_25 = -161968223669715294LL;
unsigned short var_26 = (unsigned short)6567;
_Bool arr_0 [18] ;
long long int arr_3 [23] ;
int arr_4 [23] [23] ;
_Bool arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2139384130702805349LL : -5936066210782385703LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 483423184 : -1255090966;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
