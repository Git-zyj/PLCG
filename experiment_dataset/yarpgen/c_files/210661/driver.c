#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5816278590157633572LL;
long long int var_1 = -3552376656242086102LL;
signed char var_2 = (signed char)56;
unsigned long long int var_5 = 17124940621022733078ULL;
signed char var_6 = (signed char)24;
long long int var_7 = 1887243929985972421LL;
signed char var_9 = (signed char)29;
unsigned int var_10 = 3667939794U;
unsigned int var_11 = 2942826927U;
long long int var_13 = 2066622224866422999LL;
unsigned int var_14 = 4189391895U;
unsigned int var_15 = 2911660485U;
unsigned long long int var_17 = 14743944810445783715ULL;
unsigned int var_18 = 3887181484U;
int zero = 0;
unsigned long long int var_19 = 6491621873460978700ULL;
unsigned int var_20 = 3483543629U;
unsigned int var_21 = 3969354488U;
unsigned long long int var_22 = 11918087443403382259ULL;
signed char var_23 = (signed char)-111;
signed char var_24 = (signed char)56;
int var_25 = -597072229;
unsigned int arr_2 [19] ;
unsigned int arr_3 [19] ;
unsigned long long int arr_4 [19] ;
unsigned int arr_12 [25] [25] ;
int arr_13 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4117000982U : 441348070U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 274764472U : 4274926725U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 7369271780567984949ULL : 11799104766708190544ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 3828174947U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = 1863176198;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
