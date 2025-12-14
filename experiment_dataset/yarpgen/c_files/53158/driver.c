#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
unsigned long long int var_2 = 5006018084171303949ULL;
short var_3 = (short)17720;
unsigned int var_4 = 210735237U;
short var_6 = (short)31730;
unsigned int var_7 = 3125852187U;
unsigned short var_8 = (unsigned short)21120;
signed char var_9 = (signed char)-105;
int var_10 = 516715667;
_Bool var_13 = (_Bool)0;
int var_14 = -1233373932;
signed char var_15 = (signed char)73;
signed char var_16 = (signed char)-121;
int zero = 0;
long long int var_17 = -2945333057416872794LL;
unsigned long long int var_18 = 7697132022267783169ULL;
unsigned int var_19 = 1663092204U;
unsigned int var_20 = 1173983512U;
unsigned long long int var_21 = 4520559252968406210ULL;
int var_22 = 1887476219;
signed char var_23 = (signed char)98;
signed char var_24 = (signed char)79;
int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_4 [20] [20] ;
signed char arr_5 [20] ;
unsigned short arr_2 [15] [15] ;
int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1147243784;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 10353322373952988002ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 10193610943007369905ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)60625;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = -1532588962;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
