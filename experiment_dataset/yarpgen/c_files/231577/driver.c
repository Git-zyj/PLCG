#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -5205463922111451329LL;
long long int var_2 = -2549828635718858643LL;
int var_10 = 613834683;
unsigned long long int var_11 = 2707983235827485181ULL;
int zero = 0;
long long int var_15 = -6617937150664256057LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)117;
unsigned long long int var_18 = 319663033891418868ULL;
unsigned char var_19 = (unsigned char)205;
long long int var_20 = -3095643582801258027LL;
unsigned int var_21 = 3598985306U;
unsigned char var_22 = (unsigned char)190;
long long int arr_1 [10] [10] ;
unsigned long long int arr_2 [10] ;
short arr_3 [10] [10] ;
_Bool arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -3599865394166943640LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2941916785157375163ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-10428;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
