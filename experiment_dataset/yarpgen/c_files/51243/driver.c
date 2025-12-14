#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20115;
short var_5 = (short)-4501;
signed char var_6 = (signed char)101;
signed char var_9 = (signed char)78;
unsigned long long int var_12 = 12541771891107708329ULL;
unsigned int var_14 = 808164844U;
unsigned int var_15 = 4033377199U;
signed char var_16 = (signed char)44;
long long int var_17 = 2437261301866959145LL;
int zero = 0;
unsigned int var_18 = 2581591000U;
unsigned short var_19 = (unsigned short)57874;
unsigned char var_20 = (unsigned char)79;
long long int var_21 = 3475949997424053141LL;
unsigned short var_22 = (unsigned short)36299;
long long int var_23 = -4965449498783506271LL;
short var_24 = (short)-2592;
long long int arr_1 [10] ;
signed char arr_2 [10] [10] ;
unsigned char arr_3 [10] [10] [10] ;
short arr_7 [10] [10] [10] ;
unsigned int arr_9 [10] [10] [10] ;
unsigned int arr_8 [10] [10] ;
short arr_16 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -379241314573127643LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)18652;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2518793419U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 3052108562U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (short)28872;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
