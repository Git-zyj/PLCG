#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
int var_1 = 906553944;
unsigned int var_2 = 1042709945U;
signed char var_3 = (signed char)73;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)254;
int zero = 0;
unsigned short var_11 = (unsigned short)51834;
signed char var_12 = (signed char)64;
unsigned char var_13 = (unsigned char)166;
int var_14 = -1857816888;
unsigned int var_15 = 559137822U;
int arr_0 [18] [18] ;
int arr_1 [18] ;
long long int arr_2 [18] ;
unsigned int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 1692889779;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1315466021;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -6779620552667977338LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3069387337U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
