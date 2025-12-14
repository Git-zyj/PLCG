#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
signed char var_6 = (signed char)-106;
short var_8 = (short)-8002;
unsigned int var_10 = 443401336U;
unsigned long long int var_12 = 12123526020291932589ULL;
unsigned int var_13 = 3184055524U;
signed char var_15 = (signed char)113;
int zero = 0;
int var_18 = -431650262;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-25663;
unsigned char var_21 = (unsigned char)82;
short var_22 = (short)3296;
unsigned long long int arr_1 [18] ;
unsigned long long int arr_2 [18] [18] ;
unsigned int arr_3 [18] [18] ;
unsigned char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 4529486121242020578ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 5234253584059727700ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 3744917307U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned char)150;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
