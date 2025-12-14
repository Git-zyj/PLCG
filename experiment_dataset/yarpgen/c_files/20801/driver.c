#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)236;
int var_3 = 1581460007;
unsigned char var_7 = (unsigned char)54;
unsigned long long int var_9 = 5659272640735728644ULL;
int var_11 = 289635045;
short var_12 = (short)32476;
unsigned int var_14 = 3627070748U;
unsigned short var_15 = (unsigned short)14420;
int zero = 0;
short var_18 = (short)1026;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)108;
unsigned long long int var_21 = 9404837345656466336ULL;
int arr_0 [15] ;
short arr_1 [15] ;
unsigned int arr_3 [15] ;
unsigned char arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 494652072;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)22997;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1371031457U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)79;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
