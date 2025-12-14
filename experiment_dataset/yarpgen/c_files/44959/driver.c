#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2149189230509033037LL;
long long int var_2 = -2598289325733829471LL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)189;
signed char var_6 = (signed char)41;
short var_8 = (short)4413;
long long int var_10 = -6305783335021154269LL;
unsigned char var_11 = (unsigned char)196;
long long int var_12 = 1549017321479543656LL;
unsigned char var_14 = (unsigned char)107;
int zero = 0;
unsigned char var_15 = (unsigned char)236;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)51473;
_Bool var_18 = (_Bool)0;
short var_19 = (short)5908;
long long int var_20 = -4522618233123836968LL;
long long int var_21 = -3422602909050857948LL;
unsigned long long int arr_0 [17] ;
int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 15624102414485436827ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 1623628114;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
