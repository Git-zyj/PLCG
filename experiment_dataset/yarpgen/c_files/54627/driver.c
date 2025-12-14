#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23512;
_Bool var_1 = (_Bool)1;
long long int var_2 = 6828968690898834621LL;
unsigned int var_5 = 3231775019U;
unsigned int var_6 = 1623721541U;
short var_7 = (short)2356;
short var_8 = (short)9291;
unsigned int var_9 = 3210630901U;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-8;
unsigned int var_13 = 2845786736U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)34379;
unsigned int var_16 = 2831257956U;
signed char var_17 = (signed char)27;
unsigned int arr_1 [13] ;
short arr_4 [13] [13] [13] ;
int arr_8 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2318384286U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)21615 : (short)-2940;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -1240673688;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
