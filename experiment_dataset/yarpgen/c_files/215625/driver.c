#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 387997508U;
long long int var_11 = 7219786066523319955LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 527277071145943256ULL;
int var_15 = -1468543442;
int var_16 = 779586933;
signed char var_17 = (signed char)40;
unsigned long long int var_18 = 13601047921586652511ULL;
unsigned long long int var_19 = 1512638853308632572ULL;
unsigned short var_20 = (unsigned short)19842;
long long int var_21 = 2254280768051687092LL;
unsigned int arr_2 [20] ;
signed char arr_3 [20] [20] ;
int arr_8 [20] ;
unsigned short arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 824686986U : 1245907642U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)98 : (signed char)13;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = -924564074;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61803 : (unsigned short)37672;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
