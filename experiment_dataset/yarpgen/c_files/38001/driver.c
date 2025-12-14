#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36161;
signed char var_7 = (signed char)40;
signed char var_9 = (signed char)-81;
unsigned short var_12 = (unsigned short)48221;
unsigned int var_14 = 3534769322U;
int zero = 0;
int var_17 = -1815301198;
long long int var_18 = -8645042396839121536LL;
int var_19 = -953398243;
_Bool var_20 = (_Bool)1;
long long int var_21 = -68196930997478502LL;
short arr_0 [18] ;
unsigned short arr_1 [18] [18] ;
int arr_4 [11] [11] ;
unsigned char arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)16142 : (short)-2930;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)20078 : (unsigned short)4375;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 1214390299;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)208;
}

void checksum() {
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
