#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14931535225617767695ULL;
unsigned long long int var_3 = 10568806644613252242ULL;
unsigned long long int var_4 = 15494063399012633189ULL;
long long int var_5 = -5065918937210952379LL;
short var_13 = (short)30107;
unsigned char var_16 = (unsigned char)202;
int zero = 0;
unsigned char var_19 = (unsigned char)86;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1475984018U;
unsigned int var_22 = 1776056764U;
int arr_4 [12] ;
unsigned int arr_5 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -816413944;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2368897601U;
}

void checksum() {
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
