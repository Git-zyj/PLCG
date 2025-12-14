#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5389880031864603275LL;
_Bool var_4 = (_Bool)1;
long long int var_15 = -2655016055340883465LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 763532380U;
int var_19 = -507164365;
long long int var_20 = 2874270123462211251LL;
long long int var_21 = -2410141066810946558LL;
unsigned long long int arr_0 [22] ;
int arr_5 [10] [10] ;
long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 17376053022981875953ULL : 12877799157930242176ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 829502933;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 5730967083236978743LL : 7679527028926952684LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
