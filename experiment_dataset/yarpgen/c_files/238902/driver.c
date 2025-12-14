#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2110529165U;
unsigned short var_2 = (unsigned short)25817;
unsigned short var_3 = (unsigned short)28743;
unsigned short var_4 = (unsigned short)9283;
short var_6 = (short)22509;
signed char var_8 = (signed char)-58;
unsigned long long int var_10 = 13687656944479436261ULL;
long long int var_12 = -4389581044659543995LL;
int zero = 0;
unsigned int var_13 = 2204769682U;
short var_14 = (short)21606;
int var_15 = 1704331258;
signed char var_16 = (signed char)-85;
int var_17 = 721149294;
signed char var_18 = (signed char)-33;
signed char var_19 = (signed char)113;
long long int arr_6 [14] ;
signed char arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -3762281358094920835LL : -1588838631353240802LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (signed char)107;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
