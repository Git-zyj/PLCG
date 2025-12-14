#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 110119178U;
unsigned long long int var_1 = 13712275502097519409ULL;
short var_3 = (short)-4892;
short var_4 = (short)-30533;
signed char var_5 = (signed char)-63;
signed char var_6 = (signed char)102;
signed char var_8 = (signed char)69;
unsigned int var_9 = 1713145347U;
unsigned int var_10 = 2628514059U;
unsigned int var_12 = 1320559471U;
short var_14 = (short)-17845;
unsigned short var_16 = (unsigned short)26011;
int zero = 0;
int var_17 = 1826643430;
unsigned int var_18 = 4039177981U;
_Bool var_19 = (_Bool)0;
short var_20 = (short)31845;
unsigned short arr_1 [18] ;
signed char arr_2 [18] ;
signed char arr_3 [18] ;
signed char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)40167;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)53;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
