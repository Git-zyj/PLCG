#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7483744861815266811ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3075069639U;
unsigned short var_4 = (unsigned short)11889;
unsigned short var_6 = (unsigned short)36438;
unsigned int var_7 = 214247070U;
unsigned long long int var_8 = 17322820002440387665ULL;
signed char var_9 = (signed char)-20;
unsigned char var_10 = (unsigned char)138;
short var_12 = (short)6450;
short var_13 = (short)16434;
long long int var_15 = -813371976599293023LL;
int zero = 0;
signed char var_16 = (signed char)-18;
_Bool var_17 = (_Bool)0;
int var_18 = -2028761463;
int var_19 = 619212442;
signed char var_20 = (signed char)72;
unsigned int var_21 = 2842248244U;
signed char var_22 = (signed char)-15;
unsigned long long int arr_0 [13] ;
int arr_1 [13] [13] ;
unsigned long long int arr_2 [13] [13] ;
int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 7701306226093183814ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1444395839;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 7804851742488648669ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1027053140;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
