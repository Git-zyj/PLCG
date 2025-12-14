#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 914217597;
int var_1 = -2108222411;
signed char var_2 = (signed char)-33;
int var_3 = 860074441;
long long int var_4 = -8372577458529128117LL;
long long int var_5 = -5276648770575938801LL;
int var_6 = -736091237;
int var_7 = -1745474258;
_Bool var_8 = (_Bool)1;
long long int var_9 = 7092088443881611032LL;
int var_10 = 1547489766;
int zero = 0;
long long int var_11 = -4019306454053101752LL;
long long int var_12 = 6529474580476054325LL;
int var_13 = 618436814;
long long int var_14 = 443852279250402101LL;
long long int var_15 = 2893750735293857317LL;
unsigned long long int var_16 = 6925096900629813941ULL;
unsigned char var_17 = (unsigned char)53;
int var_18 = -1928971547;
int var_19 = -1700439890;
_Bool var_20 = (_Bool)0;
unsigned long long int arr_6 [24] ;
_Bool arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 12682901299235687893ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
