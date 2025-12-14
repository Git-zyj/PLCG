#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
unsigned long long int var_4 = 16478569044190720270ULL;
long long int var_5 = 7162559154195620343LL;
signed char var_8 = (signed char)-12;
int var_9 = 1180783725;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-12489;
unsigned long long int var_12 = 2601595958130488899ULL;
long long int var_13 = 7982971211719057646LL;
int var_14 = -531714572;
unsigned short arr_0 [14] ;
short arr_1 [14] [14] ;
short arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)61401;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-13416;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-19201;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
